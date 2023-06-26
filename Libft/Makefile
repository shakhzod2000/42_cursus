NAME = libft.a

SOURCES = ft_atoi.c 	ft_isdigit.c	ft_memset.c 		ft_strncmp.c \
	ft_bzero.c			ft_isprint.c	ft_strchr.c   		ft_strnstr.c \
	ft_calloc.c			ft_memchr.c		ft_strdup.c   		ft_strrchr.c \
	ft_isalnum.c		ft_memcmp.c		ft_strlcat.c  		ft_substr.c \
	ft_isalpha.c		ft_memcpy.c		ft_strlcpy.c  		ft_tolower.c \
	ft_isascii.c		ft_memmove.c	ft_strlen.c   		ft_toupper.c \
	ft_strtrim.c		ft_strjoin.c	ft_split.c    		ft_itoa.c \
	ft_strmapi.c		ft_striteri.c	ft_putchar_fd.c  	ft_putstr_fd.c \
	ft_putendl_fd.c		ft_putnbr_fd.c	ft_lstnew.c			ft_lstadd_front.c \
	ft_lstsize.c		ft_lstlast.c 	ft_lstadd_back.c 	ft_lstdelone.c \
	ft_lstclear.c		ft_lstiter.c	ft_lstmap.c

SOURCES_B = ft_lstnew.c	ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c


HEADER = libft.h

OBJECTS = $(SOURCES:.c=.o)
OBJECTS_B = $(SOURCES_B:.c=.o)
all: $(NAME)
$(NAME):
	cc -Wall -Werror -Wextra -c $(SOURCES) # -c generates the object files(.o)
	ar -rc $(NAME) $(OBJECTS) # creates library file$(NAME) with object files(.o)
	ranlib $(NAME) # adds index to archive file created by ar command, to improve efficiency
# of searching and accessing symbols within library

bonus: 	$(NAME) $(OBJECTS_B)
		ar -rc $(NAME) $(OBJECTS_B)

clean:
	/bin/rm -rf $(OBJECTS) 
	/bin/rm -rf $(OBJECTS_B)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all