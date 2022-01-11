SRCFILES=	ft_printf.c		\
			ft_printf2.c


HEADFILES=	ft_printf.h

OBJFILES=	${SRCFILES:.c=.o}

NAME=		ft_printf.a

CC=			gcc

.c.o:		${OBJFILES}
			${CC} -Wall -Wextra -Werror -I Libft -c