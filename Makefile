FILES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c

# Cree les fichiers ".o" correspondants aux fichiers ".c" 
# build/main.o build/test.o build/bonjour.o
OBJS = $(addprefix build/, $(FILES:.c=.o))

# NAME c'est de maniere standard le nom de ton projet
NAME = test


# target avec le nom dans NAME qui doit donc creer
# un fichier avec le meme nom que NAME
# 
# Donc ici on link tous les fichier ".o" pour en
# faire un executable nomme $(NAME) avec "-o $(NAME)"

all: $(NAME)

# Link tous les fichiers objets en executable
$(NAME): $(OBJS)
	cc $(OBJS) -o $(NAME)

# Regle pour creer les fichiers objets ".o" a partir
# de leur fichier ".c" correspondant
build/%.o: %.c
	mkdir -p build
	cc -c $< -o $@

# Clean tous les objets
clean:
	rm -rf build

# Clean tout meme l'executable build
fclean:
	rm -rf build
	rm $(NAME)

re: fclean
	make all

# Liste des target 
.PHONY: all clean fclean re