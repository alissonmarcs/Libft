## Overlap no memcpy

```c
char  test1[100] =  "alisson";
memcpy(test1+6, test1, 7);
printf("%s\n", test1);
```
Pedimos 7 bytes do `src` para o `dest`. Veja que o primeiro byte do `dest` é o último byte do `src`. Quando o `memcpy` copia o primeiro byte do `src` para o primeiro byte do `dest`,  o último byte do `src` é sobrescrito, porque, novamente, o primeiro byte do `dest` é o último byte do `src`. Ocorerrá perda de dado aqui.

Output:
```
alissoalissoa
```
