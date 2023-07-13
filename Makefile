NAME = libftprintf.a

CC = cc

RM = rm -f

SRCS = \
		ft_printf.c

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