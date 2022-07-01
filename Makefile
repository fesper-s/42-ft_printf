NAME	= libftprintf.a

C_FLAGS	= -Wall -Werror -Wextra

HEADER	= ./include

SRCS	= ./src/ft_printf.c ./src/ft_printf_c.c ./src/ft_printf_s.c ./src/ft_printf_d.c \
		  ./src/ft_printf_i.c ./src/ft_printf_ud.c ./src/ft_printf_x.c

OBJS	= $(SRCS:.c=.o)

.c.o:
			cc $(C_FLAGS) -c $< -o $(<:.c=.o) -I $(HEADER) 

$(NAME):	$(OBJS)
			make -C ./libft
			cp ./libft/libft.a ./libftprintf.a
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
			rm -f $(OBJS)
			make clean -C ./libft

fclean:		clean
			rm -f $(NAME)
			make fclean -C ./libft

re:			fclean all

.PHONY:		all clean fclean re
