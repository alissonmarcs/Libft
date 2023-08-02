/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:07:55 by almarcos          #+#    #+#             */
/*   Updated: 2023/08/02 12:05:38 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	n_bytes;

	if (!nmemb || !size)
		return (malloc(0));
	n_bytes = nmemb * size;
	if (n_bytes / nmemb != size)
		return (0);
	ptr = malloc(n_bytes);
	if (!ptr)
		return (0);
	ft_bzero(ptr, n_bytes);
	return (ptr);
}
