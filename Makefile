# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azkeever <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 10:36:43 by azkeever          #+#    #+#              #
#    Updated: 2018/07/02 11:31:43 by azkeever         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = *.c
OBJECTS = *.o
HEADER = libft.h

all: $(NAME)

$(NAME):
	gcc $(HEADER) -c $(SOURCE)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean: 
	rm -f *.o *.swp *~ *.gch

fclean: clean
	rm -f $(NAME) a.out

re: fclean all

