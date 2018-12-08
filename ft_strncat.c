/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:11:35 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/05 14:39:03 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *destptr, char *srcptr, size_t num)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while (destptr[i] != '\0')
		i++;
	while (j < num)
	{
		destptr[i + j] = srcptr[j];
		j++;
	}
	destptr[i + j] = '\0';
	return (destptr);
}
