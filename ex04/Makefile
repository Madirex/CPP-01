# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/03 18:11:31 by anmateo-          #+#    #+#              #
#    Updated: 2025/08/03 18:11:32 by anmateo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed_is_for_losers

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
CYAN = \033[0;34m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)
	@echo "$(GREEN)$(NAME) created successfully!$(RESET)"

%.o: %.cpp
	@echo "$(YELLOW)Compiling $<...$(RESET)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Cleaning object files...$(RESET)"
	@rm -f $(OBJECTS)
	@echo "$(GREEN)Object files cleaned!$(RESET)"

fclean: clean
	@echo "$(RED)Removing $(NAME)...$(RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)$(NAME) removed!$(RESET)"

re: fclean all

.PHONY: all clean fclean re
