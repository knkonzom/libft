/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:53:34 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/15 14:47:50 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter the address of a string that need to be freed with free
** , then sets its pointer to NULL.
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}
