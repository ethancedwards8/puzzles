# https://makefiletutorial.com/
CC = clang++
# https://best.openssf.org/Compiler-Hardening-Guides/Compiler-Options-Hardening-Guide-for-C-and-C++
CXFLAGS = -O3 -Wall -Wextra -Wformat -Wformat=2 -Wconversion -Wimplicit-fallthrough \
		  -Werror=format-security -fstrict-flex-arrays=3 -fstack-protector-strong \
		  -fno-delete-null-pointer-checks -fno-strict-overflow -fno-strict-aliasing -ftrivial-auto-var-init=zero \
		  -Werror=implicit -Werror=incompatible-pointer-types -Werror=int-conversion

SRCS = $(wildcard *.cc)
BINS = $(SRCS:.cc=)

all: $(BINS)

%: %.cc
	$(CC) $(CXFLAGS) -o bin$@ $<
