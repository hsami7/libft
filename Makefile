NAME = libft.a

SRC = ft_isalnum.c ft_isdigit.c ft_memcpy.c ft_tolower.c \
		ft_bzero.c ft_isalpha.c ft_isprint.c ft_memset.c \
		ft_toupper.c ft_calloc.c ft_isascii.c ft_memchr.c ft_strncmp.c\
		ft_memmove.c

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

COMPILE = $(CC) $(CFLAGS) -c

LIB = ar -rcs $(NAME)

# -r      Replace or add the specified files to the archive.  If the archive does not exist a new archive file is created.
#c      Whenever an archive is created, an informational message to that effect is written to standard error.
#-s      Write an object-file index into the archive, or update an existing one, even if no other change is made to the archive.

%.o : %.c
	$(COMPILE) $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re