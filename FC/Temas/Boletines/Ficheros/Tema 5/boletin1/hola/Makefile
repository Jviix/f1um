CC=gcc-4.8
CFLAGS=-fno-asynchronous-unwind-tables
PREFIX=hola
all: asm disassembled exe

asm:   $(PREFIX).c
	$(CC) $(CFLAGS) -S $(PREFIX).c

obj:  $(PREFIX).c
	$(CC) -c $(PREFIX).c

disassembled: obj exe
	objdump -d $(PREFIX).o > $(PREFIX).o.disassembled
	objdump -d $(PREFIX) > $(PREFIX).disassembled
	objdump -d $(PREFIX).static > $(PREFIX).static.disassembled

exe:
	$(CC) -g $(PREFIX).c -o $(PREFIX)
	$(CC) -static -g $(PREFIX).c -o $(PREFIX).static


clean:
	rm -f *~ *.o $(PREFIX)_gcc*.s *.disassembled *.static $(PREFIX) $(PREFIX)_manual
