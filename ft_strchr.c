/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:09:35 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/05 14:22:26 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int sym)
{
	int		i;
	char	*st;

	i = 0;
	st = (char*)str;
	while (st[i] != sym)
	{
		if (st[i] == '\0')
			return (NULL);
		i++;
	}
	return (st + i);
}
