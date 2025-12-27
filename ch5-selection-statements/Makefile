CC := gcc
CFLAGS := -std=c11 -O2 -g -fno-omit-frame-pointer -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion -Wformat=2 -Wwrite-strings -Wcast-qual -Wmissing-prototypes -fsanitize=address,undefined -fanalyzer
TARGETS := ex1 ex2 ex3 ex4 ex5 ex6 ex7 ex8 ex9 ex10 ex11

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGETS)

.PHONY: all clean
