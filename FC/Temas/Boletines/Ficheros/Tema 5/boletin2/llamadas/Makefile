CC=gcc-4.8
CFLAGS=-O1 -fno-asynchronous-unwind-tables
PREFIX=llamadas
all: asm disassembled exe

asm:   $(PREFIX).c
	$(CC)  $(CFLAGS) -S $(PREFIX).c -o $(PREFIX).s

obj:  $(PREFIX).c
	$(CC) -c $(PREFIX).c -o $(PREFIX).o

disassembled: obj
	objdump -d $(PREFIX).o > $(PREFIX).disassembled
exe:
	$(CC) -g $(PREFIX).c -o $(PREFIX)

clean:
	rm -f *~ *.o $(PREFIX).s *.disassembled *.static $(PREFIX)
