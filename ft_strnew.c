/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:38:40 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/13 15:48:36 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc()) and returns a “fresh” string ending with ’\0’.
** Each character of the string is initialized at ’\0’.
** If the allocation fails the function returns NULL.
** The function returns the string initialized to 0.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}
