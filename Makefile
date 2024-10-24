LIBC =    ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
        ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
        ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
        ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
        ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

ADDITIONAL =    ft_strtrim.c ft_strjoin.c ft_substr.c ft_split.c \
			ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_putstr_fd.c
#

BONUS =    zft_lstadd_back_bonus.c zft_lstadd_front_bonus.c zft_lstlast_bonus.c \
		zft_lstnew_bonus.c zft_lstsize_bonus.c zft_lstclear_bonus.c \
		zft_lstdelone_bonus.c zft_lstiter_bonus.c zft_lstmap_bonus.c

SRCS = ${LIBC} ${ADDITIONAL}

SRCSALL = ${LIBC} ${ADDITIONAL} ${BONUS}

OBJS = ${SRCS:.c=.o}

OBJSALL = ${SRCSALL:.c=.o}

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I ./

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar -rsc ${NAME} ${OBJS}

bonus:	${OBJSALL}
		ar -rsc ${NAME} ${OBJSALL}

all:	${NAME}

clean:
		rm -f ${OBJSALL}

fclean:    clean;
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re bonus
