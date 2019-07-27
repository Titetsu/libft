/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:39:05 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/29 14:21:33 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sorce;

	i = 0;
	dest = (unsigned char*)dst;
	sorce = (unsigned char*)src;
	while (i < n)
	{
		dest[i] = sorce[i];
		if (dest[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
