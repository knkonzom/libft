/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 12:35:52 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/18 15:21:57 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc() and returns an array of “fresh” strings (all ending
** with ’\0’, including the array itself) obtained by spliting s using the
** character c as a delimiter. If the allocation fails the function returns
** NULL. Example : ft_strsplit("*hello*fellow***students*", ’*’) re turns the
** array ["hello", "fellow", "students"].
*/

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	size_t	i;
	int		number_of_words;
	int		new_word;

	i = 0;
	number_of_words = 0;
	new_word = 1;
	while (s[i])
	{
		while (new_word && s[i] != c)
		{
			number_of_words++;
			new_word = 0;
		}
		if (s[i] == c)
			new_word = 1;
		i++;
	}
	return (number_of_words);
}

static char	*next_word(char const *s, char c, size_t *start)
{
	size_t	n;

	while (s[*start] == c)
		*start += 1;
	n = *start;
	while (s[*start])
	{
		if (s[*start] == c)
			break ;
		*start += 1;
	}
	return (ft_strsub(s, n, *start - n));
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	start;
	char	**split;
	int		nb_words;

	if (!s)
		return (NULL);
	nb_words = wordcount(s, c);
	split = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (split == NULL)
		return (NULL);
	i = 0;
	start = 0;
	while (nb_words--)
	{
		split[i] = next_word(s, c, &start);
		i++;
	}
	split[i] = NULL;
	return (split);
}
