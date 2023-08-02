/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:09:54 by almarcos          #+#    #+#             */
/*   Updated: 2023/07/26 16:21:28 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*current_byte;

	current_byte = (unsigned char *)s;
	while (current_byte < (unsigned char *)(s + n))
	{
		*current_byte = 0;
		current_byte++;
	}
}
