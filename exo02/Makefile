# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/30 06:04:51 by bloisel           #+#    #+#              #
#    Updated: 2025/04/18 12:05:24 by bloisel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC =  main.cpp  
NAME =	Base
CC = c++ -Wall -Wextra -Werror -std=c++98 -g 

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all