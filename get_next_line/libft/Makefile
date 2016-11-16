# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thumavu <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/14 15:04:06 by thumavu           #+#    #+#              #
#    Updated: 2016/11/14 15:04:10 by thumavu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC		= ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlen.c ft_strsub.c \
		  ft_strcpy.c

OBJ		= $(SRC:.c=.o)

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I.
AR		= ar
ARFLAGS	= rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
