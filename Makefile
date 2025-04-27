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
		ft_placeholder_scanner.c \

OBJS = $(SRCS:.c=.o)

LIBFT = $(LIBFT_PATH)/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	make bonus -C $(LIBFT_PATH)

$(NAME): $(OBJS) $(LIBFT)
	@ar rcs $(NAME) $(OBJS) $(LIBFT)

# Clean object files
clean:
	make clean -C $(LIBFT_PATH)
	@rm -rf $(OBJS)

# Remove all generated files
fclean: clean
	make fclean -C $(LIBFT_PATH)
	@rm -f $(NAME)

# Rebuild everything
re: fclean all

# Prevent unnecessary commands
.PHONY: all clean fclean re
