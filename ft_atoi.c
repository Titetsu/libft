/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 11:51:40 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/29 14:06:52 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_krykozyabra(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	return (i);
}

int				ft_atoi(const char *str)
{
	long long	nbr;
	int			i;
	int			minus;

	i = 0;
	nbr = 0;
	minus = 0;
	i = ft_krykozyabra(str);
	if (str[i] == '-')
		minus = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		if (nbr != (nbr * 10) / 10)
			return (minus == 1 ? 0 : -1);
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	if (minus == 1)
		return ((int)-nbr);
	else
		return ((int)nbr);
}
