void ft_putchar_fd(char c, int fd);

#include <stddef.h>

void ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while(*s)
		ft_putchar_fd(*s++, fd);
}

int main()
{
	ft_putstr_fd("alisson\n", 1);
}