NAME		=	libftprintf.a

LIBFT		=	./libft/libft.a

DIR_SRCS	=	srcs/

SRCS		=	ft_printf.c	\
				ft_make_pat.c \
				ft_print_type.c \
				ft_print_char.c \
				ft_print_string.c \
				ft_print_point.c \
				ft_print_integer.c \
				ft_print_unit.c \
				ft_print_hex.c \
				ft_u_hex_str.c \
				ft_ull_hex_str.c \
				ft_unit_itoa.c \
				ft_put_num.c

OBJS		=	${patsubst %.c,%.o,${SRCS}}

HEADER		=	-I./includes

CFLAGS		=	-Wall -Werror -Wextra

COMPILE		=	gcc ${CFLAGS} -c

LIB			=	ar -rcs

RM			=	rm -f

all: ${NAME}

${NAME}: ${OBJS} Makefile ./includes/ft_printf.h
		@$(MAKE) -C ./libft
		@$(MAKE) bonus -C ./libft
		@cp ./libft/libft.a ${NAME}
		@${LIB} ${NAME} ${OBJS}

%.o : ${addprefix ${DIR_SRCS}, %.c}
		@${COMPILE} $< -o $@ ${HEADER}

re: fclean all

clean:
		@$(MAKE) clean -C ./libft
		@${RM} ${OBJS}

fclean: clean
		@$(MAKE) fclean -C ./libft
		@${RM} ${NAME}

.PHONY: all re clean fclean