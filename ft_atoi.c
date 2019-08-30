/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:12:58 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/12 14:43:49 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The atoi() function converts the initial portion of the string
** pointed to by str to an int representation.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (*(str + i) == '\n' ||
			*(str + i) == '\t' ||
			*(str + i) == '\r' ||
			*(str + i) == '\v' ||
			*(str + i) == '\f' ||
			*(str + i) == ' ')
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) != '\0' && *(str + i) >= '0' && *(str + i) <= '9')
		res = res * 10 + (*(str + i++) - '0');
	return (res * sign);
}
