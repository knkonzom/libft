/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:58:43 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/25 14:35:08 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc) and returns a “fresh” link. The variables content and
** content_size of the new link are initialized by copy of the parameters of the
** function. If the parameter content is nul, the variable content is
** initialized to NULL and the variable content_size is initialized to 0 even if
** the parameter content_size isn’t. The variable next is initialized to NULL.
** f the allocation fails, the function returns NULL.
** The function returns the new link.
*/

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	if (!(list = (t_list *)malloc(sizeof(*list))))
		return (NULL);
	if (!content)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else
	{
		if (!(list->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
	}
	list->next = (NULL);
	return (list);
}
