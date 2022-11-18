# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evdos-sa <evdos-sa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 11:32:44 by evdos-sa          #+#    #+#              #
#    Updated: 2022/11/18 20:22:17 by evdos-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = \
	ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha \
	ft_isascii ft_isdigit ft_isprint ft_memchr ft_memcmp \
	ft_memcpy ft_memmove ft_memset ft_strchr ft_strdup \
	ft_strlcat ft_strlcpy ft_strlen ft_strncmp ft_strnstr \
	ft_strrchr ft_tolower ft_toupper ft_substr ft_strjoin \
	ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri \
	ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

B_SRCS = \
	ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back \
	ft_lstdelone ft_lstclear ft_lstiter ft_lstmap 

OBJS = $(SRCS:.c=.o)
B_OBJS = $(B_SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
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

.PHONY: all bonus clean fclean re