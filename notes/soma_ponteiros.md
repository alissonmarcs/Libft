## Entendendo soma de ponteiros a inteiros
```c
char name[] = "alisson";
printf("%c\n", *(name  +  2));
printf("%c\n", *(name));
```
Output:
```bash
i
a
```
`name` aponta para o primeiro elemento do array. `name + 2` aponta "duas casas" a mais para a direita.
