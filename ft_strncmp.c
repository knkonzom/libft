/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:12:27 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 16:40:44 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strncmp() function lexicographically compares the null-terminated strings
** s1 and s2. The strncmp() function compares not more than n characters.
** Because strncmp() is designed for comparing strings rather than binary data,
** characters that appear after a `\0' character are not compared.
** The strncmp() functions return an integer greater than, equal to,
** or less than 0, according as the string s1 is greater than, equal to,
** or less than the string s2.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] < str2[i])
			return (-1);
		else if (str1[i] > str2[i])
			return (1);
		else if (!str1[i])
			return (0);
		i++;
	}
	return (0);
}
