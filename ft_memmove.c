/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 13:38:50 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/22 15:57:45 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memmove() function copies len bytes from string src to string dst.
** The two strings may overlap; the copy is done in a non-destructive manner.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*destination;
	size_t	i;

	i = -1;
	source = (char *)src;
	destination = (char *)dst;
	if (!destination && !source)
		return (NULL);
	if (source < destination)
		while ((int)(--len) >= 0)
			*(destination + len) = *(source + len);
	else
		while (++i < len)
			*(destination + i) = *(source + i);
	return (dst);
}
