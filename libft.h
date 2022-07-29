/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angelo <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:59:23 by aprosper          #+#    #+#             */
/*   Updated: 2022/07/29 15:57:24 by angelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <ctype.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>
# include <limits.h>

// ft_printf
int		ft_printf(const char *str, ...);
int		ft_dec_to_hexa_maj(unsigned int nb);
int		ft_dec_to_hexa_p(unsigned long long int nb);
int		ft_putptr(unsigned long long int nb);
int		ft_prct_c_prct_to_str(char *str, int idx, va_list ap);
int		ft_prct_s_to_str(char *str, int idx, va_list ap);
int		ft_prct_d_i_u_to_str(char *str, int idx, va_list ap);
int		ft_prct_x_xmaj_p_to_str(char *str, int idx, va_list ap);
// is
int		ft_isalnum(int alpha);
int		ft_isalpha(int alpha);
int		ft_isascii(int ascii);
int		ft_isdigit(int nbr);
int		ft_isprint(int printable);
// mem
void	ft_bzero(void *str, size_t len);
void	*ft_calloc(size_t element_number, size_t element_size);
void	*ft_memchr(const void *str, int c, size_t str_len);
int		ft_memcmp(const void *str1, const void *str2, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *str, int c, size_t n);
// nbr
size_t	ft_nbrlen_plus(unsigned int nb);
size_t	ft_nbrlen_hexa(unsigned int nb);
size_t	ft_nbrlen_hexa_p(unsigned long long int nb);
size_t	ft_nbrlen(int nb);
// put
void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putnbr(int nb);
void	ft_putstr_fd(char *str, int fd);
void	ft_putstr(const char *str);
// str
char	**ft_split(char const *str, char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *str);
void	ft_striteri(char *str, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *str1, char const *str2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstSize);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
int		ft_strncmp(const char *str1, const char *str2, size_t len);
char	*ft_strnstr(const char *str, const char *substr, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *str1, char const *set);
char	*ft_substr(char const *str, unsigned int start, size_t len);
// to
int		ft_atoi(const char *str);
int		ft_dec_to_hexa(unsigned int nb);
char	ft_itoa_char_hexa(int nbr);
char	ft_itoa_char(int nbr);
char	*ft_itoa(int n);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif