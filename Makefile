NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCLST	=	memset bzero memcpy memccpy memmove memchr memcmp\
			isalpha isdigit isalnum isascii isprint toupper tolower calloc strdup
#			strlen strlcpy strlcat strchr strrchr strnstr strncmp atoi\

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
