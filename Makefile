NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCLST	=	memset bzero memcpy memccpy memmove memchr memcmp\
			isalpha isdigit isalnum isascii isprint toupper tolower calloc strdup\
			strlen strlcpy strlcat strchr strrchr strnstr strncmp atoi\
			substr strjoin strtrim split itoa
#strmapi putchar_fd putstr_fd putendl_fd putnbr_fd\
#SRCLSB	=
#abs sign digitlen islower isupper purge2str\

SOURCES	=	$(addprefix ./ft_, $(addsuffix .c, $(SRCLST)))
#SOURCEB	=	$(addprefix ./ft_, $(addsuffix .c, $(SRCLSB)))

OBJECTS	=	$(SOURCES:%.c=%.o)
#OBJECTB	=	$(SOURCEB:%.c=%.o)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
	$(AR) $@ $(OBJECTS)

#bonus: $(OBJECTB)
#	$(AR) $(NAME) $^

all: $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

solo: all clean

.PHONY: make bonus all clean fclean re solo
