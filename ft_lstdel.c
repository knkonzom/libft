/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 14:15:17 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/25 14:18:41 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter the adress of a pointer to a link and frees the memory
** of this link and every successors of that link using the functions del and
** free. Finally the pointer to the link that was just freed must be set to NULL
** (quite similar to the function ft_memdel from the mandatory part).
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if ((*alst)->next)
		ft_lstdel(&(*alst)->next, del);
	ft_lstdelone(&(*alst), del);
}
