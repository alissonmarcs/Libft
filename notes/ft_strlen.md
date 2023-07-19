## Implementação do ft_strlen()
```c
unsigned long ft_strlen(const char *s)
{
	unsigned long len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
```
`unsigned` Estabelece que a função retornará um valor positivo (sem sinal).

`long` Estabelece que a função retornará um valor inteiro do tamanho `long`.

`const` Estabelece que a função receberá uma string do tipo constante (que não pode ser alterada), mas é cosmético, visto que:
```c
char name[] = "alisson";
printf("%lu\n", strlen(name));
name[0] = 'A';
printf("%lu\n", strlen(name));
```

Funciona para a função original, inclusive.

## Entendendo `short`, `int` , `long` e `unsigned`
`short`, `int` , `long` e são variáveis do tipo inteiro e elas variam em tamanho.
- `short` geralmente tem 2 bytes
- `int` geralmente tem 4 bytes
-  `long` geralmente tem 8 bytese

`unsigned` estabelece que a variável somente guardará valores positivos.

```c
printf("%lu\n", sizeof(short));
printf("%lu\n", sizeof(int));
printf("%lu\n", sizeof(long));
```
O operador `sizeof()` nos dá o tamanho em bytes das de variáveis e arrays.

## Observações

Segmentation fault:
```c
char *str = "alisson";
str[0] = 'A';
printf("%s\n", str);
```

Funciona normalmante:
```c
char str[] = "alisson";
str[0] = 'A';
printf("%s\n", str);
```

Quando você tem uma string declarada como um ponteiro pra char `char *str = "alisson"`, você **não** pode alterar os caracteres da string.

Quando você tem uma string declarada como um array de char `char str[] = "alisson"` você **pode** alterar os caracteres da string.

