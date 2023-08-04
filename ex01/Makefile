CC = g++

CFLAGS  = -g -Wall -Wextra -Werror

TARGET = Zombie
SOURCES = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = main.o Zombie.o zombieHorde.o

all: main

main: $(OBJ)
	$(CC) $(CFLAGS) -o main $(OBJ)

$(TARGET).o: $(TARGET).cpp $(TARGET).hpp
	$(CC) $(CFLAGS) -c $(TARGET).cpp

zombieHorde.o: zombieHorde.cpp $(TARGET).hpp
	$(CC) $(CFLAGS) -c zombieHorde.cpp

main.o: main.cpp	$(TARGET).hpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	$(RM) main $(OBJ)

fclean:
	make clean

re: fclean all