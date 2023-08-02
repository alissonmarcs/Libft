#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char *ptr;
    int *iptr;

    iptr = &n;
    memset(&n, 65, 6);
    ptr = (char *) &n;
    while (ptr < (char *) (&n + 1))
    	printf("%d\n", *ptr++);

    return 0;
}