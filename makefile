CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -O2

SRC = src/main.c src/payloads.c src/vm_detect.c src/consent.c
OBJ = $(SRC:.c=.o)
TARGET = trojanv

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
