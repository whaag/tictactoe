# Makefile for compiling the game

## Set the compiler
CC := gcc

## Flags
CFLAGS := -I `sdl2-config --libs --cflags` -ggdb3 -O0 --std=c99 -Wall -lSDL2 -lSDL2_image -lm

# Add source files
SRCS := tictactoe.c setup.c draw.c 

# Add header files
HDRS := setup.h draw.h

# Generate names of object files
OBJS := $(SRCS:.c=.o)

%.o: %.c $(HDRS)
	$(CC) -c -o $@ $< $(CFLAGS)


# Name the executable
EXEC := tictactoe

# Default recipe
$(EXEC):$(OBJS)
	$(CC) $^ $(CFLAGS) -o $@

.Phony : clean
	
# Clean
clean:
		-rm $(OBJS)
