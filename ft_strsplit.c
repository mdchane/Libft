/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 09:12:27 by mdchane           #+#    #+#             */
/*   Updated: 2018/11/12 11:35:13 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_escape(char const *s, int i, char c)
{
	while (s[i] == c && s[i])
		i++;
	return (i);
}

int		ft_count_words(char const *s, char c)
{
	int		i;
	int		words;
	int		flag;

	words = 0;
	i = 0;
	while (s[i])
	{
		flag = 0;
		while (s[i] != c)
		{
			flag = 1;
			i++;
		}
		if (flag == 1)
			words++;
		i++;
	}
	return (words);
}

int		ft_len_word(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

void	free_tab(void **tab, int max)
{
	int		i;

	i = 0;
	while (i < max)
	{
		ft_memdel(tab[i]);
	}
	ft_memdel(tab);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	if (!(tab = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_count_words(s, c))
	{
		i = ft_escape(s, i, c);
		if (!(tab[j] = (char *)malloc(sizeof(char) * (ft_len_word(s + i, c) + 1))))
		{
			free_tab((void **)tab, j);
			return (NULL);
		}
		k = 0;
		while (s[i] != c && s[i])
			tab[j][k++] = s[i++];
		tab[j][k] = '\0';
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
