##
## EPITECH PROJECT, 2023
## MAKEFILE
## File description:
## FILEMAKE
##

AR ?= ar

RM = rm

SRC 	=	main/main.c 							\

NAME = libmeta.a

VPATH = ./headers

CPPFLAGS = -iquote $(VPATH) -Wall -Wextra

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(AR) -rc $(NAME) $(OBJ)

clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

debug: CFLAGS += -g3
debug: re

.PHONY: all clean fclean re debug \
