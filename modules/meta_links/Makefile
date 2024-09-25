##
## EPITECH PROJECT, 2024
## MAKEFILE
## File description:
## FILEMAKE
##

CC ?= gcc

AR ?= ar

RM = rm

SRC 	=	src/meta_linked_lists.c				\

NAME = ../../libmeta.a

MODULE_NAME = ./meta_links.a

VPATH = ./headers

CPPFLAGS = -iquote $(VPATH) -Wall -Wextra

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(AR) cq $(NAME) $(OBJ)

clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

debug: CFLAGS += -g3
debug: re

.PHONY: all clean fclean module re debug \
