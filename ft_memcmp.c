/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:44:38 by almarcos          #+#    #+#             */
/*   Updated: 2023/07/25 11:17:26 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*byte_s1;
	unsigned char	*byte_s2;
	size_t			i;

	byte_s1 = (unsigned char *)s1;
	byte_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (*byte_s1 == *byte_s2 && i < (n - 1))
	{
		byte_s1++;
		byte_s2++;
		i++;
	}
	return (*byte_s1 - *byte_s2);
}
