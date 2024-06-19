# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ^@^ Foxan ^@^ <thibaut.unsinger@gmail.com  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 10:23:53 by ^@^ Foxan ^@^     #+#    #+#              #
#    Updated: 2022/11/03 10:23:54 by ^@^ Foxan ^@^    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#//= Colors =//#
BOLD		:= \033[1m
BLACK		:= \033[30;1m
RED			:= \033[31;1m
GREEN		:= \033[32;1m
YELLOW		:= \033[33;1m
BLUE		:= \033[34;1m
MAGENTA		:= \033[35;1m
CYAN		:= \033[36;1m
WHITE		:= \033[37;1m
RESET		:= \033[0m

CC			:= gcc
NAME		:= libft.a
SRCS		:= ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c\
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_printf/ft_printf/ft_printf.c \
				ft_printf/ft_printf/printf_putcharstr.c \
				ft_printf/ft_printf/printf_puthex.c \
				ft_printf/ft_printf/printf_putnrbs.c
BONUS 		:= ft_lstnew_bonus.c \
				ft_lstaddfront_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c
FLAGS		:= -Wall -Wextra -Werror
OBJS		:= ${SRCS:.c=.o}
BOBJS		:= ${BONUS:.c=.o}
SOMETHING	:= 0

all: ${NAME}
	@if [ $(SOMETHING) = 1 ]; then printf "$(MAGENTA)Done !\n$(RESET)"; fi
	@if [ $(SOMETHING) = 0 ]; then printf "$(MAGENTA)Nothing to do !\n$(RESET)"; fi

bonus: compb
	@if [ $(SOMETHING) = 1 ]; then printf "$(MAGENTA)Done !\n$(RESET)"; fi
	@if [ $(SOMETHING) = 0 ]; then printf "$(MAGENTA)Nothing to do !\n$(RESET)"; fi

compb: ${OBJS} ${BOBJS}
	@ar rc ${NAME} ${OBJS} ${BOBJS} && printf "$(MAGENTA)LIBFT$(RESET)$(BOLD) Making bonuses...\n$(RESET)"
	@ranlib ${NAME}

${NAME}: ${OBJS}
	@ar rc ${NAME} ${OBJS} && printf "$(MAGENTA)LIBFT$(RESET)$(BOLD) Making lib...\n$(RESET)"
	@ranlib ${NAME}

.c.o:
	@${CC} ${FLAGS} -c $< -o ${<:.c=.o} &&  printf "$(MAGENTA)LIBFT$(RESET)$(BOLD) Compiling: $(notdir $<) \n$(RESET)"
	@$(eval SOMETHING = 1)

clean:
	@rm -f ${OBJS} && rm -f ${BOBJS} && printf "$(GREEN)Cleaning LIBFT OBJS...\n$(RESET)"

fclean: clean
	@rm -f ${NAME} && printf "$(GREEN)Cleaning LIBFT $(NAME)...\n$(RESET)"

re:	fclean all

.PHONY: all clean fclean re
