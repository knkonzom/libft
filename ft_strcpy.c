/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 15:04:18 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 16:22:58 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strcpy() function copies the string src to dst (including the
** terminating `\0' character.) The strcpy() function returns dst.
*/

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char *ret;

	ret = dst;
	while ((*dst++ = *src++))
		;
	return (ret);
}
