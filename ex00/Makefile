CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = main.cpp Zombie.cpp newZombie.cpp randomZombie.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = phonebook

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re