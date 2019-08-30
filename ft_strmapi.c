/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 17:21:34 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/16 10:46:03 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string passed as argument by
** giving its index as first argument to create a “fresh” new string with malloc
** resulting from the successive applications of f.
** Returns the “fresh” string created from the successive applications of f.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	new_str = ft_strnew(ft_strlen(s));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	return (new_str);
}
