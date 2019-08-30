/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 15:26:00 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/18 15:29:14 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the string s to the standard output.
*/

#include "libft.h"

void	ft_putstr(char const *s)
{
	if (s == 0)
		return ;
	write(1, s, ft_strlen(s));
}
