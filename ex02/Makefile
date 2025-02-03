# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/30 19:44:38 by pabad-ap          #+#    #+#              #
#    Updated: 2025/01/31 03:41:40 by pabad-ap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= mutantStack

CPP		= c++
CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADERS		= MutantStack.hpp
SRC		= main.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPP_FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS) Makefile
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

checks:
	@$(CPP) $(CPP_FLAGS) mainVector.cpp -o vector
	@$(CPP) $(CPP_FLAGS) mainList.cpp -o list
	@$(CPP) $(CPP_FLAGS) mainDeque.cpp -o deque
	bash -c 'diff <(./mutantStack) <(./vector) -s'
	bash -c 'diff <(./mutantStack) <(./list) -s'
	bash -c 'diff <(./mutantStack) <(./deque) -s'

rmchecks:
	@rm -rf vector list deque;

.PHONY: all clean fclean re checks rmchecks
