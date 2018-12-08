/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:17:18 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/04 14:48:12 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *out, const void *in, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((unsigned char*)out)[i] = ((unsigned char*)in)[i];
		i++;
	}
	return (out);
}
