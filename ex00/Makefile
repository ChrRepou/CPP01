CC = g++

CFLAGS  = -g -Wall -Wextra -Werror

TARGET = Zombie
SOURCES = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = main.o Zombie.o newZombie.o randomChump.o

all: main

main: $(OBJ)
	$(CC) $(CFLAGS) -o main $(OBJ)

$(TARGET).o: $(TARGET).cpp $(TARGET).hpp
	$(CC) $(CFLAGS) -c $(TARGET).cpp

main.o: main.cpp	$(TARGET).hpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	$(RM) main $(OBJ)

fclean:
	make clean

re: fclean all