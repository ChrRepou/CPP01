CC = g++

CFLAGS  = -g -Wall -Wextra -Werror

TARGET = main
SOURCES = main.cpp Harl.cpp
OBJ = main.o Harl.o

all: exec

exec: $(OBJ)
	$(CC) $(CFLAGS) -o main $(OBJ)

$(TARGET).o: $(TARGET).cpp Harl.hpp
	$(CC) $(CFLAGS) -c $(TARGET).cpp

Harl.o: Harl.cpp Harl.hpp
	$(CC) $(CFLAGS) -c Harl.cpp

clean:
	$(RM) main $(OBJ)

fclean:
	make clean

re: fclean all