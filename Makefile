NAME = libftprintf.a
SRC = ft_printf ft_putchar ft_puthex\
handles/handle_id handles/handle_p\
handles/handle_s handles/handle_u\
handles/handle_x\

RM =rm -f
CC=cc
CFLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME): $(SRC:=.o)
			ar rc $(NAME) $(SRC:=.o)
clean:
	$(RM)	$(SRC:=.o) $(BONUS:=.o)
fclean: clean 
		$(RM)	$(NAME)
re:	fclean	$(NAME)