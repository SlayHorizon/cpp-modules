NAME = hibrain
SRC = main.cp Weapon.hpp Weapon.cpp HumanA.hpp HumanA.cpp HumanB.hpp HumanB.cpp
OBJ = $(SRC:.cpp=.o) # Same as files in SRC but ".o" instead of ".cpp".
CC = c++ -Wall -Wextra -Werror -std=c++98

# Default target
all: $(NAME)

# Link the object file into the final executable
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

# Compile .cpp into .o
%.o: %.cpp
	$(CC) -c $< -o $@

# Clean object files.
clean:
	rm -rf $(OBJ)

# Clean object files and the executable.
fclean: clean
	rm -rf $(NAME)

# Rebuild the project
re: fclean all

# Declare non-file targets
.PHONY: all clean fclean re
