/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:40:40 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/27 15:19:53 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		len;
	char		*ps1;
	char		*ps2;

	if (*s2 == '\0')
		return ((char *)s1);
	ps1 = (char*)s1;
	ps2 = (char*)s2;
	len = ft_strlen(ps2);
	i = 0;
	while (s1[i] != '\0' && (len + i) <= n)
	{
		if (ft_strncmp(s1 + i, s2, len) == 0)
		{
			return ((char*)s1 + i);
		}
		i++;
	}
	return (NULL);
}
