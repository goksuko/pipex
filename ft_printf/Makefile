NAME = ft_printf.a
HEAD = ft_printf.h

SRCS = \
			ft_char_string.c \
			ft_dec.c \
			ft_hex.c \
			ft_printf.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -fPIE

COPY = cp
ARC = ar rcs
#r: This option specifies that files should be replaced 
# or added to the archive. If a file with the same name 
# already exists in the archive, it is replaced. If not, it is added.

# c: This option is used to create the archive if it doesn't 
# already exist. If the archive already exists, this option has no effect.

# s: This option is used to update the symbol table of the archive. 
# It is typically used when new object files are added to the archive.

RMV = rm -f
# forcefully removes the files without asking for confirmation.

all: $(NAME)

$(NAME): $(OBJS)
	$(ARC) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
# % is a wildcard that matches any sequence of characters, 
# and it is used to create a pattern. 
# So, %.o means "any target ending with .o".

# -c: This is a compiler flag that instructs the compiler 
# to generate an object file (.o) without linking. 
# It tells the compiler to stop after the compilation phase.

# $<: This is an automatic variable that represents 
# the first prerequisite (dependency) of the rule. 
# In this context, it represents the source file (%.c).

clean:
	$(RMV) $(OBJS)

fclean:clean
	$(RMV) $(NAME) ./a.out

re: fclean all

.PHONY: all bonus clean fclean re
