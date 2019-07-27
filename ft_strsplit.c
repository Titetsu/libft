/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 15:53:00 by wkoelpin          #+#    #+#             */
/*   Updated: 2019/01/05 13:24:30 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	size_t	i;
	int		word;

	word = 0;
	i = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c)
		{
			while (s[i] != c)
				i++;
			word++;
		}
		if (s[i] == c)
			i++;
	}
	return (word);
}

static int	ft_letter_count(char const *s, int si, char c)
{
	int l;

	l = 0;
	while (s[si] != c)
	{
		l++;
		si++;
	}
	return (l);
}

static void	ft_free_all(char **new, int wi)
{
	int i;

	i = 0;
	while (i < wi)
	{
		ft_strdel(&new[i]);
		i++;
	}
	free(new);
	new = NULL;
}

char		**ft_strsplit(char const *s, char c)
{
	int		words;
	int		wi;
	int		si;
	char	**new;

	if (!s)
		return (NULL);
	words = ft_count(s, c);
	if (!(new = (char**)ft_memalloc(sizeof(char*) * (words + 1))))
		return (NULL);
	si = 0;
	wi = 0;
	while (wi < words)
	{
		while (s[si] == c)
			si++;
		if (!(new[wi] = ft_strsub(s, si, ft_letter_count(s, si, c))))
		{
			ft_free_all(new, wi);
			return (NULL);
		}
		si = si + ft_letter_count(s, si, c);
		wi++;
	}
	return (new);
}
