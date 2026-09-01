NAME	= libftprintf.a
SRC		= ft_printf.c \
		  ft_putchar.c \
		  ft_putnbr.c \
		  ft_putstr.c \
		  ft_putunbr.c \
		  ft_putunbrhex.c \
		  ft_putunbrhexupper.c \
		  ft_putptr.c
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
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re