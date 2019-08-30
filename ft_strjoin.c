/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 13:46:11 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/16 13:57:01 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc) and returns a “fresh” string ending with ’\0’,
** result of the concatenation of s1 and s2.
** If the allocation fails the function returns NULL. The function returns the
** fresh string result of the concatenation of the 2 strings.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(new_str = (char *)malloc(sizeof(*new_str) * len + 1)))
		return (NULL);
	ft_strcpy(new_str, s1);
	ft_strcat(new_str, s2);
	return (new_str);
}
