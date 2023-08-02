Caso o tamanho de buffer informado não seja suficiente para copiar o src inteiro, a função retorna strlen(dest) + strlen(src).

```c
	char tmp[100] = "alisson";
	int a = strlcat(tmp, " marcos serafim", 10);
	printf("%d\n", a);
	printf("%s\n", tmp);
```

Output:

```
22
alisson m
```

Caso o tamanho de buffer informado não dê para copiar nada, a função retorna strlen(src) + size.

```c
	char tmp[100] = "alisson";
	int a = strlcat(tmp, " marcos serafim", 1);
	printf("%d\n", a);
	printf("%s\n", tmp);
```

```
16
alisson
```

Caso o tamanho de buffer informado seja zero, a função retorna strlen(src).

```c
	char tmp[100] = "alisson";
	int a = strlcat(tmp, " marcos serafim", 0);
	printf("%d\n", a);
	printf("%s\n", tmp);
```

Output:

```
15
alisson
```

## Resumindo
Caso a função copie alguma coisa, ela retorna strlen(src) + strlen(dest).
Caso a função não copie nada, ela retorna strlen(src) + size
