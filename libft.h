/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 13:34:02 by jbernard          #+#    #+#             */
/*   Updated: 2021/05/18 10:37:24 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list 	*next;
}	t_list;

void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*fr_memmove(void *dest, void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
void	ft_toupper(int c);
void	ft_toupper(int c);
void	*ft_calloc(size_t nb, size_t size);

int		ft_memcmp(const void *str1, const void *str2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_atoi(const char *str);

char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
char	*ft_strdup(const char *str)

size_t	strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

#endif