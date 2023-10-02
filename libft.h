/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:15:37 by jdelorme          #+#    #+#             */
/*   Updated: 2023/10/02 19:32:33 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
int		ft_isprint(int c);
size_t		ft_strlen(const char *str);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	ft_bzero(void *s, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memset(void *ptr, int val, size_t len);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*ft_memchr(const void *str, int val, size_t num);
void	*ft_memcpy(void *destination, const void *source, size_t num);
void	*ft_calloc(size_t numelem, size_t sizeelem);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strjoin(const char *s1, char const *s2);
char	*ft_strdup(const char *str);
char	*ft_itoa(int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strnstr(const char *str, const char *substr, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);

typedef struct	s_list
{
	void			*content;
	struct s_list	*next
}					t_list;

#endif
