memcpy - copia n bytes do src para o dest. Caso ococorra overlap, o resultado é indefinido.
memmove - copia n bytes do src para o dest e faz o tratamento do overlap, ou seja, caso ocorra o overlap não há perda de dados. Exemplo para vermos a diferença:

```c

	char test1[100] = "alisson";
	char test2[100] = "alisson";

	memcpy(test1+2, test1, 3);
	printf("%s\n", test1);

	memmove(test2+2, test2, 3);
	printf("%s\n", test2);
```

Output:
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

Output:

```
alalisn
alalisn
```

## Meu entendimento
Como o padrão diz que o resuldado de overlap no memcpy é indefinido, fica a critério da implementação, ou seja, pode ser que o memcpy faça ou não o tratamento. Sobre o memmove, como o padrão diz que ele faz o tratamento caso ocorra overlap, temos a garantia que o memmove com overlap não terá perda de dados.
