/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 14:31:24 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/29 14:35:06 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, char const *src, size_t len)
{
	size_t	i;
	char	*sr;

	sr = (char*)src;
	i = 0;
	while (sr[i] != '\0' && (i < len))
	{
		dst[i] = sr[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
