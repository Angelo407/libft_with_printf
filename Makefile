# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: angelo <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 19:10:44 by aprosper          #+#    #+#              #
#    Updated: 2022/07/29 16:01:55 by angelo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft
NAME = $(LIBFT)

ARCHIVE = $(NAME).a
AR = ar
ARFLAGS = crs

CC = gcc
CFLAGS = -Werror -Wextra -Wall

INCLUDES =	\
	libft.h	\
	ft_printf/ft_printf.h

SRC_FT_PRINTF =	\
	ft_printf/ft_printf.c	\
	ft_printf/ft_prct_c_prct_s_to_str.c	\
	ft_printf/ft_prct_d_i_u_to_str.c	\
	ft_printf/ft_prct_x_xmaj_p_to_str.c	\
	ft_printf/ft_dec_to_hexa_maj.c	\
	ft_printf/ft_putptr.c

SRC_IS =	\
	is/ft_isalnum.c	\
	is/ft_isalpha.c	\
	is/ft_isascii.c	\
	is/ft_isdigit.c	\
	is/ft_isprint.c

SRC_MEM =	\
	mem/ft_bzero.c	\
	mem/ft_calloc.c	\
	mem/ft_memchr.c	\
	mem/ft_memcmp.c	\
	mem/ft_memcpy.c	\
	mem/ft_memmove.c	\
	mem/ft_memset.c

SRC_NBR =	\
	nbr/ft_nbrlen_hexa.c	\
	nbr/ft_nbrlen_plus.c	\
	nbr/ft_nbrlen.c

SRC_PUT =	\
	put/ft_putchar_fd.c	\
	put/ft_putchar.c	\
	put/ft_putendl_fd.c	\
	put/ft_putnbr_fd.c	\
	put/ft_putnbr.c	\
	put/ft_putstr_fd.c	\
	put/ft_putstr.c

SRC_STR =	\
	str/ft_split.c	\
	str/ft_strchr.c	\
	str/ft_strdup.c	\
	str/ft_striteri.c	\
	str/ft_strjoin.c	\
	str/ft_strlcat.c	\
	str/ft_strlcpy.c	\
	str/ft_strlen.c	\
	str/ft_strmapi.c	\
	str/ft_strncmp.c	\
	str/ft_strnstr.c	\
	str/ft_strrchr.c	\
	str/ft_strtrim.c	\
	str/ft_substr.c

SRC_TO =	\
	to/ft_atoi.c	\
	to/ft_dec_to_hexa.c	\
	to/ft_itoa_char_hexa.c	\
	to/ft_itoa_char.c	\
	to/ft_itoa.c	\
	to/ft_tolower.c	\
	to/ft_toupper.c

SRCS =	\
	$(SRC_FT_PRINTF)	\
	$(SRC_IS)	\
	$(SRC_MEM)	\
	$(SRC_NBR)	\
	$(SRC_PUT)	\
	$(SRC_STR)	\
	$(SRC_TO)

OBJS = ${SRCS:c=o}

all : $(NAME)

$(LIBFT) : $(OBJS)
	@$(AR) $(ARFLAGS) $(ARCHIVE) $^

%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(ARCHIVE) $(NAME)

re : fclean all

.PHONY : all clean fclean re
