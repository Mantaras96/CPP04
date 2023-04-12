NAME = Animal

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include

SRC =		main.cpp \
			AAnimal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			Brain.cpp
 
HEADER = Animal.hpp \
			Dog.hpp \
			Cat.hpp \
			WrongAnimal.hpp \
			WrongCat.hpp \
			Brain.hpp

SRC := $(SRC:%=$(SRC_DIR)/%)
OBJS = ${SRC:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o}
DEP = ${OBJS:.o=.d}
HEADER := $(HEADER:%=$(INC_DIR)/%)


CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98 -MMD
RM = rm -rf

${OBJ_DIR}/%.o: ${SRC_DIR}/%.cpp
	@mkdir -p ${OBJ_DIR}
	$(CC) $(CFLAG) -c $< -o $@

${NAME}:	${OBJS}
			${CC} ${CFLAG} ${SRC} -o ${NAME}

all:		${NAME}

-include ${DEP}

clean:
			@${RM} ${OBJ_DIR}

fclean:		clean
			@${RM} ${NAME} ${NAME}.d

re:			fclean all

.PHONY: all clean fclean re