# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 11:13:45 by lcarrizo          #+#    #+#              #
#    Updated: 2024/03/04 10:20:39 by lcarrizo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

############################    SRCS/DIRECTORES   #############################

NAME		= push_swap
LIBFT		= ./lib/libft/libft.a
LIBFT_DIR	= ./lib/libft/
INCLUDE		= ./include/
SRC_DIR		= src/
OBJ_DIR		= obj/
SRCS		= $(wildcard $(SRC_DIR)*.c)
OBJ		= $(addprefix $(OBJ_DIR), $(notdir $(SRCS:.c=.o)))

#############################    VARIABLES   ##################################

CC		= cc
RM 		= rm -rf
CFLAGS		= -Wall -Werror -Wextra -I$(INCLUDE)

################################    RULES    ###################################

all:		$(NAME)

$(LIBFT):	
		@make -C $(LIBFT_DIR)

$(NAME):	$(OBJ) $(LIBFT)
		$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME) -g

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
		@mkdir -p $(OBJ_DIR)
		@echo Object Directory Created!
		$(CC) $(CFLAGS) -c $< -o $@

clean:		
		$(RM) $(OBJ_DIR)
		@make -C $(LIBFT_DIR) clean
		@echo "** clean push_swap done!**"
		
fclean:		clean
		$(RM) $(NAME)
		@make -C $(LIBFT_DIR) fclean
		@echo "** full clean push_swap done!**"

re:		fclean all

.PHONY: all clean fclean re bonus
