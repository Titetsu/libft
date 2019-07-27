/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:49:43 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/27 15:12:12 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*us1;
	unsigned char	*us2;
	int				i;

	us1 = (unsigned char*)s1;
	us2 = (unsigned char*)s2;
	i = 0;
	while (us1[i] == us2[i] && us1[i] != '\0' && us2[i] != '\0')
		i++;
	return (us1[i] - us2[i]);
}
