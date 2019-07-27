/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 11:10:21 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/27 15:21:14 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*nstr;
	size_t	i;

	i = 0;
	nstr = ((char*)malloc(sizeof(char) * (len + 1)));
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	if (nstr == NULL)
		return (NULL);
	while (i < len)
	{
		nstr[i] = s[start + i];
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
