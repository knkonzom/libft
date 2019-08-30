/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 15:03:25 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/18 15:19:59 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocate (with malloc) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument. Negative numbers must be
** supported. If the allocation fails, the function returns NULL.
** The function returns the string representing the interger passed as
** argument.
*/

#include "libft.h"

static size_t	str_len(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	unsigned int	number;
	char			*str;
	size_t			len;

	len = str_len(n);
	number = n;
	if (n < 0)
	{
		number = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = number % 10 + '0';
	while (number /= 10)
		str[--len] = number % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
