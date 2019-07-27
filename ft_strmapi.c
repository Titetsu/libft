/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 12:17:34 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/27 15:16:18 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*nstr;
	size_t	i;

	if (s && f)
	{
		i = 0;
		if (!(nstr = ft_strnew(ft_strlen(s))))
			return (NULL);
		while (s[i] != 0)
		{
			nstr[i] = f(i, s[i]);
			i++;
		}
		nstr[i] = '\0';
		return (nstr);
	}
	return (NULL);
}
