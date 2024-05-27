##
## EPITECH PROJECT, 2023
## MAKEFILE
## File description:
## FILEMAKE
##

CC ?= gcc

AR ?= ar

MAKE ?= make

RM = rm

SRC 	=	src/dependency/meta_strlen.c			\
			src/dependency/meta_strdup.c			\
			src/dependency/meta_strncmp.c			\
			src/dependency/meta_putchar.c			\
			src/dependency/meta_putstr.c			\
			src/dependency/meta_strncmp.c			\
			src/rank1/meta_countchar.c				\
			src/rank1/meta_cut_rank1.c				\
			src/rank1/meta_promote_rank1.c			\
			src/rank1/meta_file_to_rank1.c			\
			src/rank1/meta_rank1_offset.c			\
			src/rank2/meta_rank2_size.c				\
			src/rank2/meta_extend_rank2.c			\
			src/rank2/meta_free_rank2.c				\
			src/rank2/meta_print_rank2.c			\
			src/rank2/meta_rank1_in_rank2.c			\
			src/rank2/meta_rank1_in_rank2_index.c	\
			src/rank2/meta_rank2_clone.c			\


NAME = libmeta_ranks.a

VPATH = ./headers

WPATH = $(VPATH)/subheaders

DPATH = src/dependency

CPPFLAGS = -iquote $(VPATH) -iquote $(WPATH) -iquote $(DPATH)

CFLAGS = -Wall -Wextra

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
