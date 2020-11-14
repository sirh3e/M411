CC		:= gcc
CFLAGS	:= -Wall -Wextra -O3

SRCS 	:= Aufgabe02.c
TARGET	:= Aufgabe02

all: build

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -rv $(TARGET)
