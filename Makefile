##
## EPITECH PROJECT, 2024
## MAKEFILE
## File description:
## FILEMAKE
##

AR 	?= ar

CC 	?= gcc

MODULES	= 	modules

LIBS	=	$(MODULES)/meta_libc	\
			$(MODULES)/meta_links

NAME 	= 	libmeta.a

VPATH 	= 	include

CFLAGS 	+= 	-Wall -Wextra -pedantic -std=c2x

CPPFLAGS = 	-iquote $(VPATH)

do-%:
	@for dir in $(LIBS); do 			 \
		$(MAKE) -C $$dir || exit $$?; 	 \
	done

all: do-all $(NAME)

clean: do-clean
	$(RM) $(OBJ)

fclean: do-fclean
	$(RM) $(NAME)

re: fclean all

debug: CFLAGS += -g3
debug: do-debug re

tests_run:
	@echo "hi"

.PHONY: all clean fclean re debug tests_run do-%

