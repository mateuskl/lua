PROGRAM := main.elf

all: native_code

CC := gcc

.SUFFIXES: .o .c

FILES := $(shell find . -name "*.c" -type f)
OBJECTS := $(subst .c,.o,$(FILES))

native_code: $(OBJECTS)
	$(CC) $(OBJECTS) -llua -llualib -o $(PROGRAM)	


.c.o :
	$(CC) -Werror -c -o $@ $<


