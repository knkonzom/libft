/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 14:18:55 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/25 14:21:51 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter a link’s pointer address and frees the memory of the
** link’s content using the function del given as a parameter, then frees the
** link’s memory using free. The memory of next must not be freed under any
** circumstance. Finally, the pointer to the link that was just freed must be
** set to NULL (quite similar to the function ft_memdel in the mandatory part).
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
