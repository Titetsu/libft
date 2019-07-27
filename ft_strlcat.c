/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 17:20:24 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/27 15:15:47 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		j;
	size_t	dl;
	size_t	sl;

	i = ft_strlen(dst);
	j = 0;
	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	if (size < dl + 1)
		return (sl + size);
	if (size > dl + 1)
	{
		while (i < size - 1)
			*(dst + i++) = *(src + j++);
		*(dst + i) = '\0';
	}
	return (dl + sl);
}
