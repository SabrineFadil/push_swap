SRCS =  parcing.c \
		ft_strcat.c \
		put_arg_to_str.c \
		ft_strcmp.c \
		ft_strdup.c \
		ft_atoi.c \
		arg_to_int.c \
		ft_split.c \
		push_swap.c \
		lk.c \
		ft_printf.c \
		ft_putchar.c \
		ft_putnbr_base.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_putadrs.c \
		ft_strjoin.c \
		index.c \
		sorting.c \
		swap2.c \
		sort3.c \
		rotate.c \
		push.c \
		sort5.c \
		ft_substr.c \
		back_a.c \
		sort_100_500.c \

		



NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = push_swap.h
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)  $(HEADER)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.c $(HEADER)
		@$(CC) $(CFLAGS) -c $< -o $@

clean : 
		rm -rf $(OBJS)
fclean : clean
		rm -rf $(NAME)
re : clean fclean all