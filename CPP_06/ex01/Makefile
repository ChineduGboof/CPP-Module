# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gboof <gboof@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 16:43:12 by cegbulef          #+#    #+#              #
#    Updated: 2023/05/06 23:06:24 by gboof            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	serialize

SRCS		=	main.cpp Serialize.cpp

OBJS		=	$(SRCS:%.cpp=%.o)

CC			=	c++

FLAGS		=	-std=c++98 -Wall -Wextra -Werror

RM			=	rm -rf

DEFAULT		=	"\033[0m"
RED			=	"\033[0;31m"
GREEN		=	"\033[1;32m"
CYAN		=	"\033[3;36m"
MAGENTA		=	"\033[0;35m"

%.o : %.cpp
			@echo $(MAGENTA)
			$(CC) $(FLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
			@$(RM) $(OBJS)
			@echo $(RED)"Deleted CPP 06 object files"$(DEFAULT)

fclean:		clean
			@$(RM) $(NAME)
			@echo $(RED)"Deleted CPP 06 executable"$(DEFAULT)

re:			fclean all

.PHONY:		all clean fclean re
