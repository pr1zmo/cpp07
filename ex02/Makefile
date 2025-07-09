NAME = array
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
SRCS = main.cpp

all:
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
