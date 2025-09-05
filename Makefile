CC = gcc
CFLAGS = -g -Wall -std=c99 -pedantic
OBJS = main.o unity.o tests.o
TARGET = main.exe

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

main.o: main.c main.h tests.h unity.h
	$(CC) $(CFLAGS) -c main.c -o main.o

tests.o: tests.c tests.h main.h unity.h
	$(CC) $(CFLAGS) -c tests.c -o tests.o

unity.o: unity.c unity.h
	$(CC) $(CFLAGS) -c unity.c -o unity.o

clean:
	del /f *.o $(TARGET)
