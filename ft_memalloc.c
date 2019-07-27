/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 10:59:57 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/27 15:08:02 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*m;
	size_t	i;

	i = 0;
	m = malloc(size);
	if (m == NULL)
		return (NULL);
	while (i < size)
	{
		m[i] = 0;
		i++;
	}
	return (m);
}
