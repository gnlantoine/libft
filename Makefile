# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguenel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 17:25:31 by aguenel           #+#    #+#              #
#    Updated: 2019/10/24 12:36:38 by aguenel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRC=ft_atoi.c \
	ft_strchr.c \
	ft_isalnum.c \
	ft_memset.c  \
	ft_tolower.c \
	ft_toupper.c \
	ft_strdup.c \
	ft_isdigit.c \
	ft_isalpha.c \
	ft_isprint.c \
	ft_bzero.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strncmp.c\
	ft_memcpy.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_memccpy.c \
	ft_isascii.c \
	ft_strrchr.c \
	ft_strlcpy.c \
	ft_strnstr.c \
	ft_memmove.c \
	ft_calloc.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \

SRC_B=	ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c	\
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

OBJ=$(SRC:.c=.o)

OBJ_B=$(SRC_B:.c=.o)

all: $(NAME)

$(NAME): $(SRC) libft.h
	@gcc -Wall -Wextra -Werror -c $(SRC) -I includes/
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

bonus: $(NAME)
	@gcc -Wall -Wextra -Werror -c $(SRC_B) -I includes/
	@ar rc $(NAME) $(OBJ_B)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ) $(OBJ_B)

fclean: clean
	@/bin/rm -f $(NAME)
	
re: fclean all
