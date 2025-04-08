CFLAGS= -Wall -Wextra -Werror -std=c++98

SRCS= PhoneBook.cpp Contact.cpp utils.cpp main.cpp

OBJS= $(SRCS:.cpp=.o)
NAME= phonebook
all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	c++ $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all


