NAME	= megaphone

SRC 	= megaphone.cpp

OBJ		= $(SRC:.cpp=.o)

FLAGS	= -Wall -Wextra -Werror

HEADER	= Contact.class.hpp

all: $(NAME)

$(NAME): $(OBJ)
	@ clang++ $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	@ clang++ $(FLAGS) -o $@ -c $<

clean:
	@ rm -rf $(OBJ)

fclean: clean
	@ rm -rf $(NAME)

re: fclean all