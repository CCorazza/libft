# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccorazza <ccorazza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 15:39:42 by ccorazza          #+#    #+#              #
#    Updated: 2014/04/27 21:24:09 by ccorazza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

include Makefile.help
include Makefile.sources
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror -ansi -O2

all: $(NAME)

$(NAME):
	@clang $(FLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
