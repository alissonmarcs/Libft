/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:07:55 by almarcos          #+#    #+#             */
/*   Updated: 2023/08/03 18:13:48 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;
	size_t	total_bytes;

	if (!nmemb || !size)
		return (malloc(0));
	total_bytes = nmemb * size;
	if (total_bytes / nmemb != size)
		return (NULL);
	memory = malloc(total_bytes);
	if (!memory)
		return (NULL);
	ft_bzero(memory, total_bytes);
	return (memory);
}
