/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 13:30:33 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/29 12:33:00 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;
	char	*sr;

	sr = (char*)src;
	i = 0;
	while (sr[i] != '\0')
	{
		dst[i] = sr[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
