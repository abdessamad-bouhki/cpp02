SRCFL = Fixed.cpp main.cpp

OBJFL = $(SRCFL:.cpp=.o)

NAME = fixed
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJFL)
	$(CPP) $(FLAGS) $^ -o $@

%.o: %.cpp Fixed.hpp
	$(CPP) -c $(FLAGS) $< -o $@

clean:
	$(RM) $(OBJFL)
fclean: clean
	$(RM) $(NAME)

re: fclean all
