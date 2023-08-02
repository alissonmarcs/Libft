/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:18:59 by almarcos          #+#    #+#             */
/*   Updated: 2023/08/02 10:59:21 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*current_byte;

	current_byte = (char *)s;
	while (current_byte < (char *)(s + n))
	{
		*current_byte = c;
		current_byte++;
	}
	return (s);
}
