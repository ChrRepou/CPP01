CC = g++

CFLAGS  = -g -Wall -Wextra -Werror

TARGET = main
OBJ = main.o 

all: exec

exec: $(OBJ)
	$(CC) $(CFLAGS) -o main $(OBJ)

$(TARGET).o: $(TARGET).cpp
	$(CC) $(CFLAGS) -c $(TARGET).cpp

clean:
	$(RM) main $(OBJ)
	$(RM) *.replace

fclean:
	make clean

re: fclean all