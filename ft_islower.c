/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 10:19:04 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 14:59:54 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The islower() function checks to see if a character is lowercase or not.
** A 0 is returned if character tests false and a non zero is returned
** if character tests true.
*/

#include "libft.h"

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
