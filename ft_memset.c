/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:18:59 by almarcos          #+#    #+#             */
/*   Updated: 2023/07/22 11:17:27 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*current_byte;

	current_byte = (unsigned char *)s;
	while (current_byte < (unsigned char *)(s + n))
	{
		*current_byte = c;
		current_byte++;
	}
	return (s);
}
