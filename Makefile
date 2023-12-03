NAME = libftprintf.a
LIBFT = libft
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC =	ft_printf.c ft_format_check.c ft_print_str.c ft_print_unsigned_decimal.c \
 		ft_print_ptr.c ft_print_hex_lower.c ft_print_hex_upper.c ft_print_decimal.c \
 		ft_print_char.c 

OBJ =$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT)
	make bonus -C $(LIBFT)
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make clean -C $(LIBFT)

fclean:
	rm -f $(NAME) $(OBJ)
	make fclean -C $(LIBFT)

re: fclean all

.phony: all clean fclean re