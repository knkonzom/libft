/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:48:14 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 14:57:53 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isdigit() function tests for a decimal digit. 0 is returned if character
** tests false and non zero if character tests true.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
