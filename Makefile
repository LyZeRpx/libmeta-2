##
## EPITECH PROJECT, 2024
## libmeta
## File description:
## Makefile
##

CC ?= gcc

AR ?= ar

RM = rm

SRC 	=	.hidden/easter_egg.c			\

NAME = libmeta.a

VPATH = ./headers

LDFLAGS = -L./libraries ${LDLIBS}
LDFLAGS = -L./libraries ${LDLIBS}
LDFLAGS = -L./libraries ${LDLIBS}
LDFLAGS = -L./libraries ${LDLIBS}
CPPFLAGS = -iquote $(VPATH) -Wall -Wextra

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C modules/meta_libc
	$(MAKE) -C modules/meta_links
	$(MAKE) -C modules/meta_ranks
	$(MAKE) -C modules/meta_csfml
	$(AR) -rcs $(NAME) $(OBJ)

clean:
	$(MAKE) clean -C modules/meta_libc
	$(MAKE) clean -C modules/meta_links
	$(MAKE) clean -C modules/meta_ranks
	$(MAKE) clean -C modules/meta_csfml
	$(RM) -f $(OBJ)

fclean: clean
	$(MAKE) fclean -C modules/meta_libc
	$(MAKE) fclean -C modules/meta_links
	$(MAKE) fclean -C modules/meta_ranks
	$(MAKE) fclean -C modules/meta_csfml
	$(RM) -f $(NAME)

re: fclean all

debug: CFLAGS += -g3
debug: re

.PHONY: all clean fclean re debug \
