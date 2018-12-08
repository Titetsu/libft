/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 12:19:58 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/04 14:22:21 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int chara)
{
	if (((chara >= 'A') && (chara <= 'Z')) || \
			((chara >= 'a') && (chara <= 'z')))
		return (1);
	return (0);
}