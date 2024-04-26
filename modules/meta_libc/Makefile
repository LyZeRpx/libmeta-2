##
## EPITECH PROJECT, 2023
## MAKEFILE
## File description:
## FILEMAKE
##

AR ?= ar

RM = rm

SRC 	= $(shell find src -maxdepth 1 -name '*.c' -type f)

NAME = libmeta_libc.a

VPATH = ./headers

HPATH = ./headers/subheaders

CPPFLAGS = -iquote $(VPATH) -iquote $(HPATH) -Wall -Wextra

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
