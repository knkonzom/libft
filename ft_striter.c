/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:40:54 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/15 14:46:55 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string passed as argument.
** Each character is passed by address to f to be modified if necessary.
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s == NULL || f == NULL)
		return ;
	while (*s)
	{
		f(s);
		s++;
	}
}
