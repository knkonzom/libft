/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:45:27 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 16:33:39 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strncat() functions append a copy of the null-terminated string s2 to the
** end of the null-terminated string s1, then add a terminating `\0'.
** The string s1 must have sufficient space to hold the result.
** The strncat() function appends not more than n characters from s2,
** and then adds a terminating `\0'.
*/

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	str_len;

	i = 0;
	str_len = ft_strlen(s1);
	while ((i < n) && (s2[i] != '\0'))
	{
		s1[str_len + i] = s2[i];
		i++;
	}
	s1[str_len + i] = '\0';
	return (s1);
}
