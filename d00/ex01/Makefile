NAME	= ez

SRC 	= ez.cpp Contact.cpp

OBJ		= $(SRC:.cpp=.o)

FLAGS	= -Wall -Wextra -Werror

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