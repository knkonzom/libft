/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 11:01:31 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 15:37:24 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isupper() function tests whether a character is uppercase or not. 0 is
** returned if character tests false and non zero is returned if character
** tests true.
*/

#include "libft.h"

int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
