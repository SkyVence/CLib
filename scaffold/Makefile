NAME = libft.a

SRCDIR = srcs/
INCDIR = includes/
GENDIR = generated/
ALL_DIRS = $(SRCDIR)

COMPILER = cc
COMPILERFLAGS = -Wall -Werror -Wextra

SRCS = $(wildcard $(addsuffix *.c,$(ALL_DIRS)))
OBJ = $(addprefix $(GENDIR), $(SRCS:%.c=%.o))
DEPS = $(addprefix $(GENDIR), $(SRCS:%.c=%.d))

all: $(NAME)

$(NAME): $(GENDIR) $(OBJ)
	ar rcs -o $@ $(OBJ) 

$(GENDIR)%.o: %.c
	@mkdir -p $(@D)
	$(COMPILER) $(COMPILERFLAGS)-I$(INCDIR) -MMD -c $< -o $@

-include $(DEPS)

$(GENDIR):
	mkdir -p $(GENDIR)

clean:
	rm -f $(OBJ) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re