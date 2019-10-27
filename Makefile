# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: audumont <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/10 15:13:55 by audumont          #+#    #+#              #
#    Updated: 2019/10/27 11:40:41 by audumont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	   ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
	   ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c\
	   ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
	   ft_toupper.c ft_strjoin.c ft_substr.c ft_strtrim.c ft_split.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memccpy.c\
	   ft_calloc.c ft_itoa.c ft_strmapi.c

SBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		 ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstlast.c \
		 ft_lstclear_bonus.c 

OBJECTS = $(SRCS:%.c=%.o)
OBONUS = $(SBONUS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
			ar rcs $(NAME) $(OBJECTS)

%.o : %.c
		gcc $(CFLAGS) -c -o $@ $<

clean :
		rm -f $(OBJECTS) $(OBONUS)

fclean : clean
		rm -f $(NAME) $(OBONUS) $(OBJECTS)

bonus : $(OBONUS)
		ar rc $(NAME) $(OBONUS)

re : fclean all

so: $(OBJETCS) libft.h
		$(CC) -shared -fPIC -Wl,-soname,libft.so -o libft.so $(OBJECTS)
