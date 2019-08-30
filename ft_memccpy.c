/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 13:12:27 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 15:39:17 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memccpy() function copies bytes from string src to string dst.
** If the character c (as converted to an unsigned char) occurs in the string
** src, the copy stops and a pointer to the byte after the copy of c in
** the string dst is returned.
** Otherwise, n bytes are copied, and a NULL pointer is returned.
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*source;
	unsigned char	*destination;
	size_t			i;

	i = 0;
	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	while (i < n)
	{
		destination[i] = source[i];
		if (source[i] == (unsigned char)c)
		{
			return (dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
