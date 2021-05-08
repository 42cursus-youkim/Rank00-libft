NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCLST	= isalnum isalpha isascii isdigit isprint memset bzero
#			memset bzero memcpy memccpy memmove memchr memcmp\
#			strlen strlcpy strlcat strchr strrchr strnstr strncmp atoi\
#			isalpha isdigit isalnum isascii isprint toupper tolower calloc strdup

SOURCES	=	$(addprefix ./ft_, $(addsuffix .c, $(SRCLST)))
OBJECTS	=	$(SOURCES:%.c=%.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

solo: all clean

.PHONY: make bonus all clean fclean re solo
