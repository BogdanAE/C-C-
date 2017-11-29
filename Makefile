# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/28 14:33:19 by ebogdan           #+#    #+#              #
#    Updated: 2017/11/28 14:43:20 by ebogdan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

SRCOBJ = *.o

GPPFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME):
	gcc $(GPPFLAGS) -c $(SRC)
	ar rc $(NAME) $(SRCOBJ) 
	ranlib $(NAME)

clean:
	/bin/rm -f $(SRCOBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
