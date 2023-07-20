#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int *i_ptr;
    char *ch_p;

    i_ptr = &n;
    ch_p = (char *)i_ptr;
    while (ch_p < (char *) (i_ptr + 1))
        printf("%d\n", *ch_p++);
    return 0;
}