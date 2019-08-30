/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:43:40 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/22 16:04:25 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strnstr() function locates the first occurrence of the null-terminated
** string needle in the string haystack, where not more than len characters are
** searched. Characters that appear after a `\0' character are not searched.
** If needle is an empty string, haystack is returned; if needle occurs nowhere
** in haystack, NULL is returned; otherwise a pointer to the first character of
** the first occurrence of needle is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *stack, const char *needle, size_t len)
{
	size_t	size;

	if (*needle == '\0')
		return ((char *)stack);
	size = ft_strlen(needle);
	while (*stack != '\0' && len-- >= size)
	{
		if (*stack == *needle && ft_memcmp(stack, needle, size) == 0)
			return ((char *)stack);
		stack++;
	}
	return (NULL);
}
