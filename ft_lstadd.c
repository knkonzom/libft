/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 14:13:33 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/25 14:15:08 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Adds the element new at the beginning of the list.
*/

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
