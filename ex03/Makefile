# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/03 18:11:07 by anmateo-          #+#    #+#              #
#    Updated: 2025/08/03 18:11:08 by anmateo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJECTS = $(SOURCES:.cpp=.o)

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
CYAN = \033[0;34m
MAGENTA = \033[0;35m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "$(CYAN)Linking $(NAME)...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)
	@echo "$(GREEN)✓ $(NAME) created successfully!$(RESET)"

%.o: %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	@echo "$(YELLOW)Compiling $<...$(RESET)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Cleaning object files...$(RESET)"
	@rm -f $(OBJECTS)
	@echo "$(GREEN)✓ Object files cleaned!$(RESET)"

fclean: clean
	@echo "$(RED)Removing $(NAME)...$(RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)✓ $(NAME) removed!$(RESET)"

re: fclean all

.PHONY: all clean fclean re
