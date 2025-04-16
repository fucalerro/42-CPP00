CFLAGS= -Wall -Wextra -Werror -std=c++98

SRCS= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS= $(SRCS:.cpp=.o)
NAME= zombie
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


