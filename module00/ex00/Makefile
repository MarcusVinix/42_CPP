CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
NAME = megaphone

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) megaphone.cpp

run:
	./$(NAME) "shhhhh... I think the students are asleep..."

clean:
	$(RM) $(NAME)