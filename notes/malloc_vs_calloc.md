`malloc(size)` - aloca um bloco de memória de tamanho `size` e retorna um ponteiro para o bloco, o valor dos bytes alocados é indefinido.
`calloc(elem, size)` - aloca um bloco de memória para um array de `elem` elementos, cada elemento com `size` bytes, e retorna um ponteiro para o bloco, todos os bytes alocados recebem o valor 0. 

## Alocando memória para strings

Usando `malloc`:

```c
char *memory = (char *) malloc(10); // aloca 10 bytes de memória.
ft_strlcpy(memory, "hello\n", 10);
printf("%s", memory);
free(memory);
```

```c
hello
```

Usando `calloc`:

```c
char *memory = (char *) calloc(10, 1); // aloca 10 bytes de memória, 10 elementos de 1 byte cada.
ft_strlcpy(memory, "hello\n", 10);
printf("%s", memory);
free(memory);
```

```c
hello
```

Até o momento alocamos strings, vamos alocar agora um array de ints de 10 elementos. Lembre-se que um `int` ocupa 4 bytes.

## Alocando memória para ints
O mesmo processo, alocamos, definimos alguns valores nesse bloco, e depois printamos os valores desse bloco.

Usando `malloc`:

```c
int *array = (int *) malloc(10 * sizeof(int)); // array de 10 elementos, cada elemento com 4 bytes cada.
int i = 0;
while (i < 10)
{
	array[i] = i;
	i++;
}
i = 0;
while (i < 10)
	printf("%d, ", array[i++]);

printf("\n");
free(array);
```

```
0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
```
Usando `calloc`:
```c
int *array = (int *) calloc(10, sizeof(int)); // array de 10 elementos, cada elemento com 4 bytes cada.
int i = 0;

while (i < 10)
{
	array[i] = i;
	i++;
}
i = 0;
while (i < 10)
	printf("%d, ", array[i++]);
printf("\n");
free(array);
```

```
0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
```

Alocar strings usando o `calloc` pode ser um pouco intuitivo, mas é só pensar que string são arrays também, onde cada elemento ocupa um byte.
