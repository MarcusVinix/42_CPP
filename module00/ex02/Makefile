CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address
RM = rm -rf
NAME = account

FILES = Account.cpp tests.cpp

compile:
	$(CC) $(CFLAGS) -I . -o $(NAME) $(FILES)

run:
	./$(NAME)

valgrind:
	valgrind ./$(NAME)
clean:
	$(RM) $(NAME)