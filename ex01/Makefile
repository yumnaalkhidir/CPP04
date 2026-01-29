CXX			:= c++
CXXFLAGS	:= -Wall -Werror -Wextra -std=c++98
NAME		:= animal
FILES		:= Animal.cpp \
				Cat.cpp \
				Dog.cpp \
				Brain.cpp \
				main.cpp
OBJ			:= $(FILES:.cpp=.o)
HEADER		:= Animal.hpp \
				Cat.hpp \
				Dog.hpp \
				Brain.hpp

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
 
re: fclean all

.PHONY: all re clean fclean