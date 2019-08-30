/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:04:31 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/16 12:51:03 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicographical comparison between s1 and s2 up to n characters or until a
** ’\0’ is reached. If the 2 strings are identical, the function returns 1,
** or 0 otherwise.
*/

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	else
		return (0);
}
