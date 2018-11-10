# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdchane <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/10 08:36:51 by mdchane           #+#    #+#              #
#    Updated: 2018/11/10 08:58:31 by mdchane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
SRCS = *.c
OBJS = *.o

all:
	gcc -Wall $(SRCS) -o $(NAME)
	./$(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(OBJS)

re: fclean all

