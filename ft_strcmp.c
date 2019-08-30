/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:35:01 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/22 16:06:40 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strcmp() and strncmp() functions lexicographically compare the
** null-terminated strings s1 and s2. The strcmp() and strncmp() functions
** return an integer greater than, equal to, or less than 0, according as the
** string s1 is greater than, equal to, or less than the string s2.
** The comparison is done using unsigned characters,
** so that `\200' is greater than `\0'.
*/

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			if ((str1[i] - str2[i]) < 0)
			{
				return (-1);
			}
			else
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}
