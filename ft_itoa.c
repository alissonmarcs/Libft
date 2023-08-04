/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:13:39 by almarcos          #+#    #+#             */
/*   Updated: 2023/08/04 17:57:06 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char *ft_itoa_my(int n)
// {
// 	char *new_str;
// 	long tmp;
// 	size_t size_to_alloc;

// 	tmp = n;
// 	size_to_alloc = 0;
// 	if (n < 0)
// 	{
// 		size_to_alloc++;
// 		n = -n;
// 	}
// 	while (n)
// 	{
// 		size_to_alloc++;
// 		n /= 10;
// 	}
// 	new_str = ft_calloc(size_to_alloc + 1, sizeof (char));
// 	if (!new_str)
// 		return (NULL);
// 	while (size_to_alloc--)
// 	{
// 		new_str[size_to_alloc] = tmp % 10 + '0';
// 		tmp /= 10;
// 	}
// 	if (new_str[1] == 0)
		
// 	return (new_str);
// }

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = n > 0 ? 0 : 1;
	nbr = nbr > 0 ? nbr : -nbr;
	while (n)
	{
		n /= 10;
		size++;
	}
	if (!(str = (char *)malloc(size + 1)))
		return (0);
	*(str + size--) = '\0';
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] == '\0')
	{
		*(str + size) = '0';
		printf("opa: %lu", size);
	}
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}

int main()
{
	char *p;

	p = ft_itoa(2);
	printf("%s\n", p);
	free(p);
}
