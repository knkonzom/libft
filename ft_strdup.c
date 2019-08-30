/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 14:54:53 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 16:26:00 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strdup() function allocates sufficient memory for a copy of the string
** s1, does the copy, and returns a pointer to it. The pointer may subsequently
** be used as an argument to the function free.
** If insufficient memory is available, NULL is returned.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	i = 0;
	while (s1[len])
		len++;
	if (!(str = (char *)malloc(sizeof(*str) * len + 1)))
		return (NULL);
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
