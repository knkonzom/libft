/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 12:27:29 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 16:29:47 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strlcat() function copies and concatenates strings with the same input
** parameters and output result.
** The strlcat() function appends string src to the end of dst.  It will append
** at most dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate,
** unless dstsize is 0 or the original dst string was longer than dstsize
** (in practice this should not happen as it means that either dstsize is
** incorrect or that dst is not a proper string).
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	int		j;

	i = ft_strlen(dst);
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize < dst_len + 1)
		return (src_len + dstsize);
	if (dstsize > dst_len + 1)
	{
		while (i < dstsize - 1 && *(src + j) != '\0')
			*(dst + i++) = *(src + j++);
		*(dst + i) = '\0';
	}
	return (dst_len + src_len);
}
