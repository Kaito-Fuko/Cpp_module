COLOR_RED = \033[91m
COLOR_GREEN = \033[92m
COLOR_YELLOW = \033[93m
COLOR_BOLD = \033[1m
COLOR_BROWN = \033[0;33m
COLOR_END = \033[0m

# Nom du fichier exécutable
NAME = Fixed

# Compilateur
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Dossiers
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include

# Fichiers sources
SRC = $(SRC_DIR)/main.cpp \
      $(SRC_DIR)/Fixed.cpp

OBJ = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))

# Création du dossier obj si nécessaire
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

# Règle principale
all: $(NAME)

# Compilation de l'exécutable
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) $(OBJ) -o $(NAME)
	@echo "$(COLOR_GREEN)Compilation de $(NAME) terminée.$(COLOR_END)"

# Compilation des fichiers objets
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(COLOR_YELLOW)Nettoyage des fichiers objets terminé.$(COLOR_END)"

# Nettoyage complet
fclean: clean
	@rm -f $(NAME)
	@echo "$(COLOR_BROWN)Nettoyage complet terminé.$(COLOR_END)"

# Recompilation complète
re: fclean all

.PHONY: all clean fclean re