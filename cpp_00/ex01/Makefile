COLOR_RED = \033[91m
COLOR_GREEN = \033[92m
COLOR_YELLOW = \033[93m
COLOR_BOLD = \033[1m
COLOR_BROWN = \033[0;33m
COLOR_END = \033[0m

# Nom du fichier exécutable
NAME = PhoneBook

# Compilateur
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Fichier source
SRC =	PhoneBook.cpp \
		Contact.cpp \
		main.cpp

OBJ = $(SRC:.cpp=.o)

# Règle principale
all: $(NAME)

# Compilation de l'exécutable
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(COLOR_GREEN)$(COLOR_BOLD)Compilation de $(NAME) terminée.$(COLOR_END)"

# Nettoyage des fichiers objets
clean:
	@rm -f $(OBJ)
	@echo "$(COLOR_YELLOW)Nettoyage des fichiers objets terminé.$(COLOR_END)"

# Nettoyage complet
fclean: clean
	@rm -f $(NAME)
	@echo "$(COLOR_BROWN)Nettoyage complet terminé.$(COLOR_END)"

# Recompilation complète
re: fclean all

.PHONY: all clean fclean re