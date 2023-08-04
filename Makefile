# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 10:35:42 by almarcos          #+#    #+#              #
#    Updated: 2023/08/03 16:57:24 by almarcos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SOURCES = ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcat.c \
	ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_strjoin.c ft_strtrim.c ft_split.c
	

OBJECTS = $(SOURCES:.c=.o)

INCLUDES = .

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SOURCES) -I $(INCLUDES)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -rf $(NAME)

fclean: clean
	rm -f $(OBJECTS)

re: fclean all

