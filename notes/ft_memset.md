## Acessando bytes individualmente de variáveis e arrays

Acessamos os três primeiros bytes do `n` e definimos neles o valor `'o'`. Depois printamos individualmente os 4 bytes que compõem o `n`. O tipo do `n` pode ser alterado. O while printará todos os bytes que compõem o `n`, então caso `long n`, o `while` printará o valor dos os 8 bytes.

```c
int n;
char *ptr;

ptr = (char *) &n;
*ptr = 'o';
*(ptr + 1) = 'o';
*(ptr + 2) = 'o';

while (ptr < (char *) (&n + 1))
	printf("%d\n", *ptr++);
```
O array `n` ocupa 40 bytes (4 bytes do int * 10 elementos do array). Acessamos os três primeiros bytes desse array e definimos o valor `'o'`, e depois printamos cada byte desse array.

Quando temos um ponteiro char apontando para um bloco de memória, esse ponteiro char acessa cada byte desse bloco de memória.

```c
int n[10];
char *ptr;

ptr = (char *) n;
*ptr = 'o';
*(ptr + 1) = 'o';
*(ptr + 2) = 'o';

while (ptr < (char *) (&n + 1))
	printf("%d\n", *ptr++);
```


## Observações

```c
int n;
char *ptr;
int *iptr;

//iptr = &n;
ptr = (char *) &n;
while (ptr < (char *) (&n + 1))
	printf("%d\n", *ptr++);
```
Output:
```
-59
127
0
0
```
Por algum motivo, quando algum ponteiro aponta para o `n`, seus bytes ficam zerados:
```c
int n;
char *ptr;
int *iptr;

iptr = &n;
ptr = (char *) &n;
while (ptr < (char *) (&n + 1))
	printf("%d\n", *ptr++);
```
Output:
```
0
0
0
0
```

Isso acontece com o`long` também, mas não acontece com o `short`.