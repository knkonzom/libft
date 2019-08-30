/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:26:51 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 16:50:43 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strstr() function locates the first occurrence of the null-terminated
** string needle in the null-terminated string haystack.
** If needle is an empty string, haystack is returned; if needle occurs nowhere
** in haystack, NULL is returned; otherwise a pointer to the first character of
** the first occurrence of needle is returned.
*/

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	return (ft_strnstr(haystack, needle, ft_strlen(haystack)));
}
