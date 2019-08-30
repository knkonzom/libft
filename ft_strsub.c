/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 12:52:48 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/16 13:50:20 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc) and returns a “fresh” substring from the string given
** as argument. The substring begins at indexstart and is of size len. If start
** and len aren’t refering to a valid substring, the behavior is undefined.
** If the allocation fails, the function returns NULL. The function returns
** the substring.
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	i = 0;
	if (!s || !(substr = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
