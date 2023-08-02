## memmove e memcpy

`memcpy` - copia n bytes do `src` para o `dest`. Caso ococorra overlap, o resultado é indefinido.
`memmove` - copia n bytes do `src` para o `dest` e faz o tratamento do overlap, ou seja, caso ocorra o overlap não há perda de dados. Exemplo:

```c
char test1[100] = "alisson";
char test2[100] = "alisson";

memcpy(test1+2, test1, 3);
printf("%s\n", test1);

memmove(test2+2, test2, 3);
printf("%s\n", test2);
```

```
alalaon
alalion
```

Porém, em algumas situações, quando eu chamo o memcpy e memmove com os mesmos inputs e com overlap, os resultados são iguais. Então, em algumas situações o memcpy trata o overlap corretamente. Exemplo:

```c
char test1[100] = "alisson";
char test2[100] = "alisson";

memcpy(test1+2, test1, 4);
printf("%s\n", test1);

memmove(test2+2, test2, 4);
printf("%s\n", test2);
```

```
alalisn
alalisn
```

## Meu entendimento
Como o padrão diz que o resuldado de overlap no `memcpy` é indefinido, não podemos esperar que o `memcpy` sempre faça esse tratamento, porque isso seria inseguro, as vezes ele faz e as vezes não. Sobre o `memmove`, como o padrão diz que ele faz o tratamento caso ocorra overlap, então temos a garantia que o `memmove` com overlap não terá perda de dados.

## Implementação

```c
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest < src)
		return(ft_memcpy(dest, src, n));
	while (n--)
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}
```

Quando o `dest` é menor, o fim do `dest` é o começo do `src`. Começando a cópia pelo começo do `src` (dest[0] = src[0], dest[1] = src[1], ...) ao chegar no fim do `dest`, o começo `src` será sobrescrito, mas ele já foi copiado, então não há perda de dados.
```
<dest.....>
		<src.....>
```
Para testar:

```c
char test1[100];
ft_strlcpy(test1 + 3, "alisson", sizeof test1);
ft_memmove(test1, test1 + 3, 8); // test1 é menor que test1 + 3
printf("%s\n", test1);
```

```
alisson
```


Quando o `dest` é maior, o fim do `src` é o começo do `dest`. Começando a cópia pelo fim do `src` (dest[10] = src[10], dest[9] = src[9], ...), ao chegar no começo do `dest`, o fim do `src` será sobrescrito, mas ele já foi copiado, então não há perda de dados. 
```
<src.....>
		<dest.....>
```
Para testar:
```c
char test1[100] = "alisson";
ft_memmove(test1 + 3, test1, 8); // test + 3 é maior que test1
printf("%s\n", test1);
```

```
alialisson
```
