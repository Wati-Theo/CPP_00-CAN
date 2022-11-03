NAME = megaphone

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

CC  = g++

RM  = rm -f

CFLAGS = -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re 