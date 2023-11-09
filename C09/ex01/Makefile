CC = cc
AR = ar rcs
NAME = libft.a
SRC_DIR = ./srcs/
INC_DIR = ./includes/
SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS = $(addprefix $(SRC_DIR),$(SRC))
OBJS :=$(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJS)
	ar -crs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -I$(INC_DIR) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re