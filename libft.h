/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:13:25 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/05 14:26:45 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#ifndef NULL
# define NULL ((void *) 0)
#endif

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(const char *str);
int		ft_isalpha(int chara);
int		ft_strcmp(const char *s1, const char *s2);
int     ft_strncmp(const char *s1, const char *s2, size_t n);

void    ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
void	ft_bzero(char *b, size_t len);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memcpy(void *out, const void *in, size_t n);
void	*ft_memset(void *des, int c, size_t n);
void	*ft_memset(void *des, int c, size_t n);

char	*ft_strstr(const char *string1, const char *string2);
char    *ft_strnstr(const char *string1, const char *string2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *destptr, char *srcptr, size_t num);
char	*ft_strchr(const char *str, int sym);
char	*ft_strrchr(const char *string, int sym);
char	*ft_strcpy(char *dst, const char *src);
char    *ft_strdup(const char *s1);

size_t	ft_strlen(const char *str);

#endif
