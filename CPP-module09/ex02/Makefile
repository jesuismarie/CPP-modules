NAME			= PmergeMe

BUILD			= build
SRC				= main.cpp PmergeMe.cpp
OBJ				= $(SRC:%.cpp=$(BUILD)/%.o)
HEADER			= PmergeMe.hpp
CC				= c++
RM				= rm -rf
CPPFLAGS		= -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

YELLOW			= \033[38;2;255;239;0m
RESET			= \033[0m

$(BUILD)/%.o:	%.cpp $(HEADER) Makefile
			$(CC) $(CPPFLAGS) -c $< -o $@

all:		$(BUILD) $(NAME)

$(NAME):		$(OBJ) Makefile
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(BUILD):
			@mkdir -p $(BUILD)

clean:
			@rm -rf $(BUILD)

fclean:			clean
			@$(RM) $(NAME)
			@echo "${YELLOW}Everything is cleared ✅${RESET}"

re:			fclean all

.PHONY:		all clean fclean re