/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:25:09 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/15 14:47:13 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter the address of a memory area that needs to be freed with
** free(), then puts the pointer to NULL. Takes the pointers address that needs
** its memory freed as a parameter, then sets it to NUL.
*/

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (!ap || !*ap)
		return ;
	free(*ap);
	*ap = 0;
}
