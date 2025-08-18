# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 15:05:53 by lbenatar          #+#    #+#              #
#    Updated: 2024/12/03 14:45:24 by lbenatar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ./libft/ft_memcpy.c \
		./libft/ft_calloc.c \
		./libft/ft_putendl_fd.c \
		./libft/ft_strnstr.c \
		./libft/ft_isalpha.c \
		./libft/ft_strtrim.c \
		./libft/ft_memmove.c \
		./libft/ft_isalnum.c \
		./libft/ft_isdigit.c \
		./libft/ft_isprint.c \
		./libft/ft_tolower.c \
		./libft/ft_toupper.c \
		./libft/ft_strncmp.c \
		./libft/ft_strlen.c \
		./libft/ft_putstr_fd.c \
		./libft/ft_bzero.c \
		./libft/ft_memset.c \
		./libft/ft_substr.c \
		./libft/ft_strmapi.c \
		./libft/ft_strchr.c \
		./libft/ft_atoi.c \
		./libft/ft_isascii.c \
		./libft/ft_itoa.c \
		./libft/ft_putchar_fd.c \
		./libft/ft_strjoin.c \
		./libft/ft_split.c \
		./libft/ft_putnbr_fd.c \
		./libft/ft_memchr.c \
		./libft/ft_strrchr.c \
		./libft/ft_striteri.c \
		./libft/ft_strdup.c \
		./libft/ft_memcmp.c \
		./libft/ft_strlcpy.c \
		./libft/ft_strlcat.c \
		./libft/ft_int_hex_add.c \
		./libft/ft_itoa_u.c \
		./libft/ft_printf.c \
		./libft/ft_write.c \
		./libft/ft_int_hex.c \
		./libft/ft_write2.c \
		./src/ft_p.c \
		./src/ft_rr.c \
		./src/ft_rrr.c \
		./src/ft_s.c \
		./src/move_a_to_b.c \
		./src/get_nb_operations.c \
		./src/get_min_max.c \
		./src/get_min_max2.c \
		./src/sort.c \
		./src/verif_create_ab.c \
		./src/verif_create_ab2.c \
		./src/put_min_max_front.c \
		./src/sort_utils.c \
		./src/main.c

BS_SRC	= ./libft/ft_memcpy.c \
		./libft/ft_calloc.c \
		./libft/ft_putendl_fd.c \
		./libft/ft_strnstr.c \
		./libft/ft_isalpha.c \
		./libft/ft_strtrim.c \
		./libft/ft_memmove.c \
		./libft/ft_isalnum.c \
		./libft/ft_isdigit.c \
		./libft/ft_isprint.c \
		./libft/ft_tolower.c \
		./libft/ft_toupper.c \
		./libft/ft_strncmp.c \
		./libft/ft_strlen.c \
		./libft/ft_putstr_fd.c \
		./libft/ft_bzero.c \
		./libft/ft_memset.c \
		./libft/ft_substr.c \
		./libft/ft_strmapi.c \
		./libft/ft_strchr.c \
		./libft/ft_atoi.c \
		./libft/ft_isascii.c \
		./libft/ft_itoa.c \
		./libft/ft_putchar_fd.c \
		./libft/ft_strjoin.c \
		./libft/ft_split.c \
		./libft/ft_putnbr_fd.c \
		./libft/ft_memchr.c \
		./libft/ft_strrchr.c \
		./libft/ft_striteri.c \
		./libft/ft_strdup.c \
		./libft/ft_memcmp.c \
		./libft/ft_strlcpy.c \
		./libft/ft_strlcat.c \
		./libft/ft_int_hex_add.c \
		./libft/ft_itoa_u.c \
		./libft/ft_printf.c \
		./libft/ft_write.c \
		./libft/ft_int_hex.c \
		./libft/ft_write2.c \
		./src/ft_p.c \
		./src/ft_rr.c \
		./src/ft_rrr.c \
		./src/ft_s.c \
		./src/move_a_to_b.c \
		./src/get_nb_operations.c \
		./src/get_min_max.c \
		./src/get_min_max2.c \
		./src/sort.c \
		./src/verif_create_ab.c \
		./src/verif_create_ab2.c \
		./src/put_min_max_front.c \
		./src/sort_utils.c \
		./src/checker.c \
		./src/checker2.c

NAME	= push_swap
BS_NAME = checker
CC	= cc
CFLAGS	= -Wall -Wextra -Werror

${NAME}:${OBJS}
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

${BS_NAME}:${OBJS}
	${CC} ${CFLAGS} ${BS_SRC} -o ${BS_NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
	
all	: ${NAME}

bonus	: ${BS_NAME}

clean :
		rm -f *.o

fclean : clean
		rm -f ${NAME} ${BS_NAME}

re : fclean all

.PHONY: all clean fclean re bonus
