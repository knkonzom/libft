/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:24:19 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 16:52:46 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The toupper() function converts a lower-case letter to the corresponding
** upper-case letter.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 'a' + 'A');
	}
	return (c);
}
