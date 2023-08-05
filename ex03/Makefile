CC = g++

CFLAGS  = -g -Wall -Wextra -Werror

TARGET = main
SOURCES = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = main.o HumanA.o HumanB.o Weapon.o

all: exec

exec: $(OBJ)
	$(CC) $(CFLAGS) -o main $(OBJ)

$(TARGET).o: $(TARGET).cpp HumanA.hpp HumanB.hpp Weapon.hpp
	$(CC) $(CFLAGS) -c $(TARGET).cpp

HumanA.o: HumanA.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	$(CC) $(CFLAGS) -c HumanA.cpp

HumanB.o: HumanB.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	$(CC) $(CFLAGS) -c HumanB.cpp

Weapon.o: Weapon.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	$(CC) $(CFLAGS) -c Weapon.cpp

clean:
	$(RM) main $(OBJ)

fclean:
	make clean

re: fclean all