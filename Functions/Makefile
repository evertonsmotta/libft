# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evdos-sa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 11:32:44 by evdos-sa          #+#    #+#              #
#    Updated: 2022/11/12 11:33:20 by evdos-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = \
	ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha \
	ft_isascii ft_isdigit ft_isprint ft_memchr ft_memcmp \
	ft_memcpy ft_memmove ft_memset ft_strchr ft_strdup \
	ft_strlcat ft_strlcpy ft_strlen ft_strncmp ft_strnstr \
	ft_strrchr ft_tolower ft_toupper

B_SRCS = \
	ft_lstmap

OBJS = $(SRCS:.c=.o)
B_OBJS = $(B_SRCS:.c=.o)
CC = cc

CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar -crs $@ $^

bonus: $(OBJS) $(B_OBJS)
	ar -crs $(NAME) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJS) $(B_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

