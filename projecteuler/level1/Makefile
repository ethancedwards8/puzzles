# https://makefiletutorial.com/
CC = gcc

SRCS = $(wildcard *.c)
BINS = $(SRCS:.c=)

all: $(BINS)

%: %.c
	$(CC) -o $@ $<
