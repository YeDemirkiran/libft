CC = cc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror

SRC_DIR = ./src/
INC_DIR = ./include/

LIBFT_CHAR_DIR = $(SRC_DIR)char/
LIBFT_CHAR_SRC = ft_tolower.c ft_toupper.c
LIBFT_CHAR = $(addprefix $(LIBFT_CHAR_DIR), $(LIBFT_CHAR_SRC))

LIBFT_CONVERTER_DIR = $(SRC_DIR)converter/
LIBFT_CONVERTER_SRC = ft_atoi.c ft_itoa.c
LIBFT_CONVERTER = $(addprefix $(LIBFT_CONVERTER_DIR), $(LIBFT_CONVERTER_SRC))

LIBFT_LL_DIR = $(SRC_DIR)linked_list/
LIBFT_LL_SRC = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
LIBFT_LL = $(addprefix $(LIBFT_LL_DIR), $(LIBFT_LL_SRC))

LIBFT_MATH_DIR = $(SRC_DIR)math/
LIBFT_MATH_SRC = ft_abs.c ft_intlen.c ft_st_smaller.c
LIBFT_MATH = $(addprefix $(LIBFT_MATH_DIR), $(LIBFT_MATH_SRC))

LIBFT_MEMORY_DIR = $(SRC_DIR)memory/
LIBFT_MEMORY_SRC = ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c
LIBFT_MEMORY = $(addprefix $(LIBFT_MEMORY_DIR), $(LIBFT_MEMORY_SRC))

LIBFT_PREDICATE_DIR = $(SRC_DIR)predicate/
LIBFT_PREDICATE_SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isspace.c
LIBFT_PREDICATE = $(addprefix $(LIBFT_PREDICATE_DIR), $(LIBFT_PREDICATE_SRC))

LIBFT_STRING_DIR = $(SRC_DIR)string/
LIBFT_STRING_SRC = ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_word_count.c
LIBFT_STRING = $(addprefix $(LIBFT_STRING_DIR), $(LIBFT_STRING_SRC))

LIBFT_WRITE_DIR = $(SRC_DIR)write/
LIBFT_WRITE_SRC = ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
LIBFT_WRITE = $(addprefix $(LIBFT_WRITE_DIR), $(LIBFT_WRITE_SRC))

# SRCS = ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c ./ft_itoa.c ./ft_memchr.c ./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_putchar_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c ./ft_putstr_fd.c ./ft_split.c ./ft_strchr.c ./ft_strdup.c ./ft_striteri.c ./ft_strjoin.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strlen.c ./ft_strmapi.c ./ft_strncmp.c ./ft_strnstr.c ./ft_strrchr.c ./ft_strtrim.c ./ft_substr.c ./ft_tolower.c ./ft_toupper.c
# BSRCS = ./ft_lstadd_back_bonus.c ./ft_lstadd_front_bonus.c ./ft_lstclear_bonus.c ./ft_lstdelone_bonus.c ./ft_lstiter_bonus.c ./ft_lstlast_bonus.c ./ft_lstmap_bonus.c ./ft_lstnew_bonus.c ./ft_lstsize_bonus.c 

ALL_SRC = $(LIBFT_CHAR) $(LIBFT_CONVERTER) $(LIBFT_LL) $(LIBFT_MATH) $(LIBFT_MEMORY) $(LIBFT_PREDICATE) $(LIBFT_STRING) $(LIBFT_WRITE)
ALL_OBJ = $(ALL_SRC:.c=.o)

# OBJS = $(SRCS:.c=.o)
OBJ_DIR = ./obj/

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@ -I$(INC_DIR)

# write: $(LIBFT_WRITE)
# 	ar rcs $(NAME) $(LIBFT_WRITE_OBJ)
# 	mkdir -p $(OBJ_DIR)
# 	mv -t $(OBJ_DIR) $(LIBFT_WRITE_OBJ)

$(NAME): $(ALL_OBJ)
	ar rcs $(NAME) ${ALL_OBJS}
	mkdir -p $(OBJ_DIR)
	mv -t $(OBJ_DIR) $(ALL_OBJ)

clean:
	rm -rf $(OBJ_DIR)

clean_obj:
	find . -name "*.o" -type f -delete

fclean: clean
	rm -f ./$(NAME)

re: fclean all

.PHONY: all bonus clean fclean re