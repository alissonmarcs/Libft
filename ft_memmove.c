/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:53:23 by almarcos          #+#    #+#             */
/*   Updated: 2023/08/09 12:53:24 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n--)
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}

// int main()
// {
// 	char teste1[] = "con\0sec\0\0te\0tur";
// 	printf("%s\n", teste1);
// 	write(1, teste1, 10);

// 	char teste1[] = "\0";
// 	printf("%d", *teste1 == 0);
// }
