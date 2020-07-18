CC = gcc
CFLAGS = -Wall -Wextra -Werror
OPTION = -I $(HEADER)
NAME = rush-02
HEADER = ./includes/
SRC_DIR = ./srcs/
SRCS = rush-02.c ft_string.c ft_stdio.c
OBJS = $(addprefix $(SRC_DIR), $(SRC_:.c=.o))

.c.o :
	$(CC) $(CFLAGS) $(OPTION) -c -o $@ $<

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : clean all
