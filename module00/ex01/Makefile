CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address
RM = rm -rf
NAME = phoneBook

FILES = ClassContact.cpp ClassPhoneBook.cpp main.cpp

all: $(NAME)

compile:
	$(CC) $(CFLAGS) -o $(NAME) $(FILES)

run:
	./$(NAME)

valgrind:
	valgrind ./$(NAME)
clean:
	$(RM) $(NAME)