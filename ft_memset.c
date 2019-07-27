/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 20:25:35 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/27 15:09:19 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dst;

	if (len == 0)
		return (b);
	dst = (unsigned char*)b;
	while (len--)
	{
		*dst = (unsigned char)c;
		if (len)
			dst++;
	}
	return (b);
}
