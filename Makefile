NAME = libft.a
source =  \
	  ft_printf.c \
	  ft_checknext.c \
	  ft_isvalid.c

object = $(source:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all:$(object) $(NAME)

$(NAME): $(object)
	ar rc $(NAME) $(object)

clean:
	rm -f $(object)

fclean: clean
	rm -f $(NAME)

re: fclean all

.SECONDARY: $(object)

.PHONY: clean

