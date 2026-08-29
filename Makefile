NAME	= libftprintf.a
RUN		= run.out
SRC		= ft_printf.c \
		  ft_putchar.c \
		  ft_putnbr.c \
		  ft_putstr.c
OBJ		= $(SRC:.c=.o)
CFLAGS	= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(RUN)

re: fclean all

run: $(NAME)
	cc $(CFLAGS) main.c $(NAME) -o $(RUN)
	./$(RUN)

.PHONY: all clean fclean re run