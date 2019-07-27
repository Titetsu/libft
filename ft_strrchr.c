/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:18:41 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/27 15:20:40 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int sym)
{
	if (ft_strchr(str, sym) == NULL)
		return (NULL);
	while (*str)
		str++;
	while (*str != sym)
		str--;
	return ((char*)str);
}
