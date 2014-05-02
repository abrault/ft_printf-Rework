# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrault <abrault@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/04/14 11:17:08 by abrault           #+#    #+#              #
#    Updated: 2014/04/15 18:17:37 by abrault          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = src/ft_atoi.c \
	  src/ft_bzero.c \
	  src/ft_isalnum.c \
	  src/ft_isalpha.c \
	  src/ft_isdigit.c \
	  src/ft_isascii.c \
	  src/ft_isprint.c \
	  src/ft_memccpy.c \
	  src/ft_memchr.c \
	  src/ft_memcmp.c \
	  src/ft_memcpy.c \
	  src/ft_memmove.c \
	  src/ft_memset.c \
	  src/ft_strcat.c \
	  src/ft_strchr.c \
	  src/ft_strcmp.c \
	  src/ft_strcpy.c \
	  src/ft_strdup.c \
	  src/ft_strlcat.c \
	  src/ft_strlen.c \
	  src/ft_strncat.c \
	  src/ft_strncmp.c \
	  src/ft_strncpy.c \
	  src/ft_strnstr.c \
	  src/ft_strrchr.c \
	  src/ft_strstr.c \
	  src/ft_tolower.c \
	  src/ft_toupper.c \
	  src/ft_putstr.c \
	  src/ft_putendl.c \
	  src/ft_putchar.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc -c $(CFLAGS) -I./includes/ $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
