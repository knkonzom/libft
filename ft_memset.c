/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:51:50 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/08 11:27:16 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memset is used to fill a block of memory with a particular value.
** b is the starting address of memory to be filled.
** c is the value to be filled.
** len is the number of bytes to be filled starting from b.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len-- > 0)
		*ptr++ = (unsigned char)c;
	return (b);
}
