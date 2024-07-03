# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/03 15:37:55 by sshahary          #+#    #+#              #
#    Updated: 2024/07/03 15:38:18 by sshahary         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = Brain

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