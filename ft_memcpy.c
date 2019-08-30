/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:45:15 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 15:47:09 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memcpy() function copies n bytes from memory area src to memory area dst.
** If dst and src overlap, behavior is undefined. The memcpy() function returns
** the original value of dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (!d && !s)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dst);
}
