# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taliza <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 20:30:52 by taliza            #+#    #+#              #
#    Updated: 2021/10/31 20:31:02 by taliza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ft_putendl_fd.c	ft_split.c	ft_strmapi.c \
ft_itoa.c	ft_putnbr_fd.c	ft_striteri.c	ft_strtrim.c \
ft_putchar_fd.c	ft_putstr_fd.c	ft_strjoin.c	ft_substr.c \
ft_isalpha.c ft_toupper.c ft_isdigit.c ft_tolower.c ft_isalnum.c \
ft_isascii.c ft_isprint.c ft_strlen.c ft_strchr.c ft_memset.c ft_bzero.c\
ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strrchr.c ft_strncmp.c \
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c
OBJS			= $(SRCS:.c=.o)

SRCS_B			= ft_lstnew.c ft_lstadd_front.c  ft_lstsize.c ft_lstlast.c \
				  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c 

OBJS_B			= $(SRCS_B:.c=.o)

HEADER			= libft.h

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADER)
				ar rcs $(NAME) $(OBJS)


clean:
				$(RM) $(OBJS) $(OBJS_B)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:		$(OBJS) $(OBJS_B)
				ar rcs $(NAME) $(OBJS) $(OBJS_B)

.PHONY:			all clean fclean re bonus
