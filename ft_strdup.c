/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 13:17:30 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/27 15:13:07 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		src_size;
	char	*new_str;

	i = 0;
	src_size = 0;
	while (((char*)s1)[src_size])
		src_size++;
	new_str = (char*)malloc(sizeof(*new_str) * (src_size + 1));
	if (new_str == NULL)
		return (NULL);
	while (i < src_size)
	{
		new_str[i] = ((char*)s1)[i];
		i++;
	}
	new_str[src_size] = '\0';
	return (new_str);
}
