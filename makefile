CC=clang++

CFLAGS= -g -Wall

TARGET=main
	
all: $(TARGET)
	
	echo "Compiling started on $(TARGET).cpp"

	$(CC) $(CFLAGS) $(TARGET).cpp -o programm

	echo "Compiling done Programm is your Output"