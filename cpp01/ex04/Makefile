CFLAGS= #-Wall -Wextra -Werror -std=c++98

SRCS= main.cpp

OBJS= $(SRCS:.cpp=.o)
NAME= sedddd
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


