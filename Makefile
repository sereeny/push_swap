# Standard
NAME				= push_swap

# Directories
LIBFT_DIR			= ./libft
LIBFT_LIB			= $(LIBFT_DIR)/libft.a
INC					= inc/
SRC_DIR				= srcs/
OBJ_DIR				= obj/

# Compiler and CFlags
CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -I$(INC) -I$(LIBFT_DIR)/inc
RM					= rm -f

# Source Files
COMMANDS_DIR		=	$(SRC_DIR)commands/push.c \
						$(SRC_DIR)commands/swap.c \
						$(SRC_DIR)commands/reverse_rotate.c \
						$(SRC_DIR)commands/rotate.c \
						$(SRC_DIR)commands/sort.c

PUSH_SWAP_DIR		=	$(SRC_DIR)push_swap/push_swap.c \
						$(SRC_DIR)push_swap/convert.c \
						$(SRC_DIR)push_swap/checks.c \
						$(SRC_DIR)push_swap/stack_init.c \
						$(SRC_DIR)push_swap/utils.c \
						$(SRC_DIR)push_swap/init_a_b.c \
						$(SRC_DIR)push_swap/init_b_a.c \
						$(SRC_DIR)push_swap/split.c

# Concatenate all source files
SRCS 				= $(COMMANDS_DIR) $(PUSH_SWAP_DIR)

# Apply the pattern substitution to each source file in SRC and produce a corresponding list of object files in the OBJ_DIR
OBJ 				= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

# Build rules
all: 				$(NAME)

$(NAME): 			$(OBJ) $(LIBFT_LIB)
					@$(CC) $(CFLAGS) $(OBJ) $(LIBFT_LIB) -o $(NAME)

# Compile object files from source files
$(OBJ_DIR)%.o:		$(SRC_DIR)%.c 
					@mkdir -p $(@D)
					@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT_LIB):
					@make -C $(LIBFT_DIR)

clean:
					@$(RM) -r $(OBJ_DIR)
					@make clean -C $(LIBFT_DIR)

fclean: 			clean
					@$(RM) $(NAME)
					@make fclean -C $(LIBFT_DIR)

re: 				fclean all

# Phony targets represent actions not files
.PHONY: 			all clean fclean re
