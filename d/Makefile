# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile 18.06.54                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pphanitc <pphanitc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 14:58:26 by pphanitc          #+#    #+#              #
#    Updated: 2024/03/17 18:09:47 by pphanitc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc

SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c \
		ft_atoi.c ft_memchr.c ft_memcmp.c ft_strchr.c ft_strlcat.c \
		ft_strlcpy.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c\
		ft_toupper.c ft_calloc.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strdup.c ft_striteri.c \
		ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re