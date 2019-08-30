/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 13:54:04 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 15:41:13 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memchr() function locates the first occurrence of
** c (converted to an unsigned char) in string s. The memchr() function returns
** a pointer to the byte located, or NULL if no such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		if (*str != (unsigned char)c)
			str++;
		else
			return (str);
	return (0);
}
