NAME	= libftprintf.a

C_FLAGS	= -Wall -Werror -Wextra

LIBFT	= ./libft/libft.a

SRCS	= ./src

$(NAME):	$(OBJS)
			ar rcs $(NAME)

all:		$(NAME)

