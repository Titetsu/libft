/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:25:32 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/27 15:08:12 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ds;
	unsigned char	c2;
	int				i;

	i = 0;
	c2 = (unsigned char)c;
	ds = (unsigned char *)s;
	while (n--)
	{
		if (ds[i] == c2)
			return (ds + i);
		i++;
	}
	return (NULL);
}
