NAME = libft.a
CC = cc
FLAGS = -Wall -Werror -Wextra
FTS = ft_isalpha.c
OBJECTS = ft_isalpha.o
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS): $(FTS) $(HEADER)
	$(CC) $(FLAGS) -c $(FTS) -I.

.PHONY: clean
clean:
	rm -f $(OBJECTS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
