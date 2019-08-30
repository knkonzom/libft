/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:04:40 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 14:48:30 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isalnum() functions tests for any character for
** which isalpha() or isdigit() is true.
** The isalnum() function returns 0 if character tests
** false and returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	else
		return (0);
}
