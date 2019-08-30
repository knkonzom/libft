/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 14:49:32 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 16:31:34 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strlen() function computes the length of the string s.
** The strlen() function returns the number of characters that precede the
** terminating NUL character.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char *p;

	p = s;
	while (*s)
		++s;
	return (s - p);
}
