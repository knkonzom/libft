/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:06:00 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/13 14:19:38 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” memory area. The memory
** allocated is initialized to 0. If the allocation fails, the function returns
** NULL.
** The function returns the allocated memory area.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*memory;

	memory = malloc(size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, size);
	return (memory);
}
