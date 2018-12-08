/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 15:48:48 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/04 14:47:16 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		j;
	char	*sr;

	sr = (char*)src;
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (sr != '\0')
	{
		dest[i + j] = sr[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
