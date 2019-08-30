/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:35:50 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 14:55:39 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isascii() function tests for an ASCII character, which is any character
** between 0 and octal 0177 inclusive.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	else
		return (0);
}
