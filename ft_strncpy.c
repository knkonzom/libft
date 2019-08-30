/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 15:49:08 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/22 16:01:24 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strncpy() function copies at most len characters from src into dst.
** If src is less than len characters long, the remainder of dst is filled with
** `\0' characters.  Otherwise, dst is not terminated.
** The strncpy() function returns dst.
*/

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		if (*(src + i))
			*(dst + i) = *(src + i);
		else
			while (i < len)
				*(dst + i++) = '\0';
	return (dst);
}
