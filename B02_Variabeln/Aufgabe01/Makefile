CC		:= gcc
CFLAGS	:= -Wall -Wextra -O3

SRCS 	:= Aufgabe01.c
TARGET	:= Aufgabe01

all: build

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -rv $(TARGET)
