# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/10 20:46:32 by cegbulef          #+#    #+#              #
#    Updated: 2023/04/10 20:46:34 by cegbulef         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME		=	brainz

SRCS		=	main.cpp Zombie.cpp
				
OBJS		=	$(SRCS:%cpp=%o)

CC			=	c++

FLAGS	=	-std=c++98 -Wall -Wextra -Werror

RM			=	rm -rf

DEFAULT		=	"\033[0m"
RED			=	"\033[0;31m"
GREEN		=	"\033[1;32m"
CYAN		=	"\033[3;36m"
MAGENTA		=	"\033[0;35m"

%.o : %.cpp
			@printf $(MAGENTA)
			$(CC) $(FLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(FLAGS) $(OBJS) -o $@

clean:
			@$(RM) $(OBJS)
			@echo $(RED)"Deleted CPP 01 object file"$(DEFAULT)

fclean:		clean
			@$(RM) $(NAME)
			@echo $(RED)"Deleted CPP 01 executable"$(DEFAULT)

re:			fclean all

.PHONY:		all clean fclean re
