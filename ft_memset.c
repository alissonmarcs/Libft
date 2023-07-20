#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	char *current_byte;

	current_byte = (char *) s;
	while (current_byte < (char *) (s + n))
	{
		*current_byte = c;
		current_byte++;
	}
	return (s);
}

int main()
{
	// int n;
	// char *ptr;

	// ptr = (char *) &n;
	// *ptr = 'o';
	// *(ptr + 1) = 'o';

	// while (ptr < (char *) (&n + 1))
	// 	printf("%d\n", *ptr++);

	int n[10];
	char *ptr;
	int *iptr;

	ptr = (char *) n;
	*ptr = 'o';
	*(ptr + 1) = 'o';
	*(ptr + 2) = 'o';

	while (ptr < (char *) (&n + 1))
		printf("%d\n", *ptr++);


	return (0);
}