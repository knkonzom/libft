/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:02:39 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 15:51:53 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strcat() and strncat() functions append a copy of the null-terminated
** string s2 to the end of the null-terminated string s1, then add a
** terminating `\0'.
** The string s1 must have sufficient space to hold the result.
*/

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
