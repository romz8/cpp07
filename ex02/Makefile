# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 11:21:46 by rjobert           #+#    #+#              #
#    Updated: 2024/02/21 11:22:18 by rjobert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++
NAME = ex02
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -MMD -I ./ 
HEADER = Array.hpp Array.tpp 
SRC = main.cpp 
OBJS = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)
RM = rm -rf

all: $(NAME)

-include $(DEPS)
$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile $(HEADER )
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re