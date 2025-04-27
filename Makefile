# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtrofyme <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/25 10:52:26 by vtrofyme          #+#    #+#              #
#    Updated: 2025/04/25 10:52:31 by vtrofyme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_PATH = ./libft

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
		ft_parse_string.c \
		ft_putchar_int.c \
		ft_putnbr_int.c \
		ft_putpointer_int.c \
		ft_putstr_int.c \
		ft_put_unsigned_int.c \
		ft_put_hex.c

OBJS = $(SRCS:.c=.o)

LIBFT = $(LIBFT_PATH)/libft.a

all: $(LIBFT) $(NAME)

${LIBFT}:
		@echo
		make bonus -C libft
		cp ${LIBFT} ${NAME}

$(NAME): $(OBJS) $(LIBFT)
	ar -rcs ${NAME} ${OBJS}

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	make clean -C $(LIBFT_PATH)
	@rm -rf $(OBJS)
	@rm -rf $(LIBFT)

# Remove all generated files
fclean: clean
	make fclean -C $(LIBFT_PATH)
	@rm -f $(NAME)

# Rebuild everything
re: fclean all

# Prevent unnecessary commands
.PHONY: all clean fclean re
