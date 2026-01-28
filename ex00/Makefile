CXX			:= c++
CXXFLAGS	:= -Wall -Werror -Wextra -std=c++98
NAME		:= animal
FILES		:= Animal.cpp \
				Cat.cpp \
				Dog.cpp \
				main.cpp
OBJ			:= $(FILES:.cpp=.o)
HEADER		:= Animal.hpp \
				Cat.hpp \
				Dog.hpp \


WRONG		:= wrong_animal
WFiles		:=	WrongAnimal.cpp \
				WrongCat.cpp \
				WrongMain.cpp
WOBJ		:= $(WFiles:.cpp=.o)
WHEADERS	:=	WrongAnimal.hpp \
				WrongCat.hpp

all: $(NAME) $(WRONG)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(WRONG): $(WOBJ)
		$(CXX) $(CXXFLAGS) $(WOBJ) -o $(WRONG)
clean:
	rm -f $(OBJ) $(WOBJ)

fclean: clean
	rm -f $(NAME) $(WRONG)
 
re: fclean all

.PHONY: all re clean fclean