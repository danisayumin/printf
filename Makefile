NAME = libftprintf.a

CC = cc

RM = rm -f

SRCS = \
		ft_printf.c \
		ft_putchar.c \
		ft_puthex_lower.c \
		ft_puthex_upper.c \
		ft_putnbr.c \
		ft_putptr.c \
		ft_putstr.c \
		ft_putunsign.c \
		ft_strlen.c

FLAGS = -Wall -Werror -Wextra

INCLUDE = ./include

OBJS = $(SRCS: .c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) -I $(INCLUDE) -c $(SRCS)
		ar -rcs $(NAME) $(OBJS)
clean:
		$(RM) $(OBJS)
fclean: clean
		$(RM) $(NAME)

re: fclean all