/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:22:35 by almarcos          #+#    #+#             */
/*   Updated: 2023/08/04 09:53:42 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <malloc.h>

static size_t	ft_word_count(const char *s, int c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		if (*s != (unsigned char)c && *s)
		{
			words++;
			while (*s != (unsigned char)c && *s)
				s++;
		}
		s++;
	}
	return (words);
}

static char	**ft_alloc_words(char **array, const char *s, int c)
{
	size_t	current_word_len;
	size_t	index;

	index = 0;
	while (*s)
	{
		current_word_len = 0;
		while (s[current_word_len] != (unsigned char)c && s[current_word_len])
			current_word_len++;
		array[index] = ft_calloc(current_word_len + 1, sizeof(char));
		ft_strlcpy(array[index], s, current_word_len + 1);
		index++;
		while (*s != (unsigned char)c && *s)
			s++;
		while (*s == (unsigned char)c && *s)
			s++;
	}
	array[index] = NULL;
	return (array);
}

// static void	*free_words(char **array)
// {
// 	size_t	i;

// 	i = 0;
// 	while (array[i])
// 		free(array[i++]);
// 	free(array);
// 	return (NULL);
// }

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	words = ft_word_count(s, c);
	array = ft_calloc(words + 1, sizeof(char *));
	while (*s == (unsigned char)c && *s)
		s++;
	ft_alloc_words(array, s, c);
	return (array);
}
