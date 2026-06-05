# https://makefiletutorial.com/
CC = clang++

SRCS = $(wildcard *.cc)
BINS = $(SRCS:.cc=)

all: $(BINS)

%: %.cc
	$(CC) -Wall -Wextra -o bin$@ $<
