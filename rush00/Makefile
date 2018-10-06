NAME	= rush

SRC 	= main.cpp

OBJ		= $(SRC:.cpp=.o)

FLAGS	= -lncurses

#HEADER	= 

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