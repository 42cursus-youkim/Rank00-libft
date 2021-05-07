CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = libft.a
AR = ar rcs
LIB = ranlib
RM = rm -f

SOURCES =	ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
	 		ft_isprint.c
OBJECTS =	$(SOURCES:%.c=%.o)

$(TARGET): $(OBJECTS)
	$(AR) $(TARGET) $(OBJECTS)
	$(LIB) $(TARGET)

all: $(TARGET)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(TARGET)

re: fclean all

solo: all clean

.PHONY: make all clean fclean re solo
