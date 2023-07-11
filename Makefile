NAME = printf.a

CC = cc

RM = rm -f

SRCS = \

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