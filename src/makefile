# Makefile for compiling the game

## Set the compiler
CC := gcc

## Flags
CFLAGS := `sdl2-config --libs --cflags` -ggdb3 -O0 --std=c99 -Wall -lSDL2_image -lm

# Add header files
HDRS :=

# Add source files
SRCS := tictactoe.c

# Generate names of object files
OBJS := $(SRCS:.c=.o)

# Name the executable
EXEC := tictactoe

# Default recipe
all: $(EXEC)
