# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 03:19:48 by lcarrizo          #+#    #+#              #
#    Updated: 2024/03/21 17:15:49 by lcarrizo         ###    ###london.com     #
#                                                                              #
# **************************************************************************** #

############################    SRCS/DIRECTORES   #############################

NAME		= libft.a
HEADER		= -I ./libft.h
SRC		= ft_putnbr_fd.c ft_atoi.c ft_bzero.c ft_calloc.c \
		ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
		ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
		ft_toupper.c ft_atol.c ft_strcmp.c ft_putstr.c \
		ft_putchar.c ft_putnbr.c
OBJ_DIR		= obj/

OBJ		= $(addprefix $(OBJ_DIR),$(notdir $(SRC:.c=.o)))

#############################      RULES    ##################################

CC		= cc
RM 		= rm -fr
# GCC OPT: -c = compile without exe. -I = find the header in the folder given
OPT		= -c
CFLAGS		= -Wall -Werror -Wextra
# ar: 	r = Insert  the  files  member...  into  archive (with replacement).
#	c = Create  the  archive.   The specified archive is always created 
#	    if it did not exist, when you request an update.
#	s = Add an index to the archive, or update it if it already exists.
AR		= ar rcs

#############################    TARGETS    ##################################

all:		$(NAME)

$(NAME):	$(OBJ)
		$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o:	%.c
		@mkdir -p $(OBJ_DIR)
		$(CC) $(CFLAGS) $(OPT) $< -o $@

clean:		
		$(RM) $(OBJ_DIR) 
		@echo "** clean libft done!**"

fclean:		clean
		$(RM) $(NAME)
		@echo "** full clean libft done!**"

re:		fclean all

.PHONY: all clean fclean re
