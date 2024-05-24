NAME = pipex
LIBFT = ./Libft/libft.a
FT_PRINTF = ./ft_printf/ft_printf.a
HEAD = ../Includes/pipex.h

SRCS_1 = \
			pipex_main.c \

SRCS_2 = \
			utils.c \
			path.c \
			ft_putstr2_fd.c \

SRCS_DIR = Sources

OBJS_1 = $(SRCS_1:%.c=$(OBJS_DIR)/%.o)

OBJS_2 = $(SRCS_2:%.c=$(OBJS_DIR)/%.o)

OBJS_DIR = Objects

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(FT_PRINTF) $(LIBFT) $(OBJS_DIR) $(OBJS_1) $(OBJS_2)
	$(CC) $(CFLAGS) $(OBJS_1) $(OBJS_2) $(FT_PRINTF) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C ./Libft

$(FT_PRINTF):
	$(MAKE) -C ./ft_printf

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o:$(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(OBJS_DIR)
	$(MAKE) clean -C ./Libft
	$(MAKE) clean -C ./ft_printf

fclean:
	rm -f $(NAME)
	rm -f ./a.out
	rm -f ./Sources/a.out
	rm -f ./pipex
	rm -rf $(OBJS_DIR)
	$(MAKE) fclean -C ./Libft
	$(MAKE) fclean -C ./ft_printf

re: fclean all

.PHONY: all clean fclean re
