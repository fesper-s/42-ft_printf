NAME	= libftprintf.a

C_FLAGS	= -Wall -Werror -Wextra

LIBFT	= ./libft/libft.a

SRCS	= ./src/ft_printf.c

OBJS	= $(SRCS:.c=.o)

.c.o:
			cc $(C_FLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

$(LIBFT):
			make ./libft

clean:
			rm -f $(OBjS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
