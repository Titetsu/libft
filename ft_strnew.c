/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 13:55:28 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/27 15:18:39 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *m;

	if (!(m = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (m)
		ft_bzero(m, size + 1);
	return (m);
}
