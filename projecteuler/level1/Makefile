# https://makefiletutorial.com/
CC = clang++

SRCS = $(wildcard *.cc)
BINS = $(SRCS:.cc=)

all: $(BINS)

%: %.cc
	$(CC) -O3 -Wall -Wextra -o bin$@ $<
