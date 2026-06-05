# https://makefiletutorial.com/
CC = gcc

SRCS = $(wildcard *.cc)
BINS = $(SRCS:.cc=)

all: $(BINS)

%: %.cc
	$(CC) -o bin$@ $<
