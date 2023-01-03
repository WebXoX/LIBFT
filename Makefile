# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 17:04:44 by jperinch          #+#    #+#              #
#    Updated: 2022/07/27 10:41:42 by jperinch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_bzero.c \
		ft_memset.c ft_memcpy.c ft_memmove.c ft_memcmp.c ft_memchr.c ft_toupper.c ft_tolower.c \
		ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strchr.c\
		ft_strdup.c ft_atoi.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

SRC2 = 	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

CFLAG = -Wall -Wextra -Werror
CC = gcc
OBJ = $(SRC:.c=.o)
OBJ2 = $(SRC2:.c=.o)



$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
bonus: $(OBJ2) 
	ar rcs $(NAME)  $(OBJ2)


all: $(NAME)


clean:
	rm -rf *.o 

fclean:
	rm -f $(NAME) *.o 

re:     fclean all