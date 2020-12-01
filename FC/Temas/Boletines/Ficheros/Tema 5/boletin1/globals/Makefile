CC=gcc-4.8
CFLAGS=-O0 -g
PREFIX=globals
all: asm disassembled exe

asm:   $(PREFIX).c
	$(CC) -fno-asynchronous-unwind-tables -S $(PREFIX).c

obj:  $(PREFIX).c
	$(CC) -c $(CFLAGS) $(PREFIX).c

exe:
	$(CC) $(CFLAGS) $(PREFIX).c -o $(PREFIX)

disassembled: obj exe
	objdump -d $(PREFIX).o > $(PREFIX).o.disassembled
	objdump -d $(PREFIX) > $(PREFIX).disassembled

clean:
	rm -f *~ *.o *.s *.disassembled *.static $(PREFIX)
