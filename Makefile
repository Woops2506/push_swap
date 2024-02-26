
NAME = push_swap

SRC_DIR := src
OBJ_DIR := obj

SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SOURCES))

CFLAGS = -Wall -Werror -Wextra
CC = gcc
EXEC = push_swap
LIBDIR = my_libs
LIB = mylibs.a


all: $(LIBDIR)/$(LIB) $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ) -L$(LIBDIR)/libft -lft

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBDIR)/$(LIB):
	$(MAKE) -C $(LIBDIR)
	cp $(LIBDIR)/$(LIB) .

clean:
	rm -f $(OBJ) $(BONUS_OBJ)
	$(MAKE) -C $(LIBDIR) clean

fclean: clean
	rm -f $(EXEC) $(BONUS_EXEC) $(LIB)
	$(MAKE) -C $(LIBDIR) fclean

re: fclean all

.PHONY: all bonus clean fclean re