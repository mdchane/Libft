NAME = main
SRCS = *.c
OBJS = *.o

all:
	gcc $(SRCS) -o $(NAME)
	./$(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(OBJS)

re: fclean all

