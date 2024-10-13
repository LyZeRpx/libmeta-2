##
## EPITECH PROJECT, 2024
## MAKEFILE
## File description:
## FILEMAKE
##

CC ?= gcc

AR ?= ar

RM = rm

SRC 	=	src/meta_assets.c 							\
			src/meta_detection.c						\
			src/meta_events.c							\
			src/meta_inputs.c							\
			src/meta_window.c							\


NAME = ../../libmeta.a

VPATH = ./headers

WPATH = ${VPATH}/subheaders

LDFALGS = L. $(LDLIBS)

LDLIBS = -lcsfml-system -lcsfml-graphics -lcsfml-window

CPPFLAGS = -iquote $(VPATH) -iquote $(WPATH) -Wall -Wextra -pedantic

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	ar -cq $(NAME) $(OBJ)
clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

standalone: NAME = ../../libmeta_csfml.a
standalone: all

debug: CFLAGS += -g3
debug: re

.PHONY: all clean fclean re debug \
