# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mareurin <mareurin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 16:42:58 by mareurin          #+#    #+#              #
#    Updated: 2024/02/25 16:42:59 by mareurin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= gnl.a

SRCS			= get_next_line.c \
			  get_next_line_utils.c

OBJS			= $(SRCS:%.c=%.o)

FLAGS			= -Wall -Wextra -Werror

$(NAME):		$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

all:			$(NAME)

%.o: %.c
			gcc $(FLAGS) -c $< -o $@

clean:
			rm -f $(OBJS)

fclean:			clean
			rm -f $(NAME)

re:			fclean all

.PHONY:			all clean fclean re