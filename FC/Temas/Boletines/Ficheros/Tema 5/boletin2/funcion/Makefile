CC=gcc-4.8
CFLAGS=-fno-asynchronous-unwind-tables
PREFIX=funcion
all: asm disassembled exe

asm:  $(PREFIX)_manual.s  $(PREFIX).c
	$(CC) -O0 $(CFLAGS) -S $(PREFIX).c -o $(PREFIX)_gcc-no-opt.s
	$(CC) -O1 $(CFLAGS) -S $(PREFIX).c -o $(PREFIX)_gcc-opt.s

obj:  $(PREFIX)_manual.s $(PREFIX).c
	$(CC) -c $(PREFIX)_manual.s -o $(PREFIX)_manual.o
	$(CC) -c -O0 $(PREFIX).c -o $(PREFIX)_gcc-no-opt.o
	$(CC) -c -O1 $(PREFIX).c -o $(PREFIX)_gcc-opt.o
disassembled: obj
	objdump -d $(PREFIX)_manual.o > $(PREFIX)_manual.disassembled
	objdump -d $(PREFIX)_gcc-no-opt.o > $(PREFIX)_gcc-no-opt.disassembled
	objdump -d $(PREFIX)_gcc-opt.o > $(PREFIX)_gcc-opt.disassembled
exe:
	$(CC) -g $(PREFIX).c -o $(PREFIX)
	$(CC) -g $(PREFIX)_manual.s -o $(PREFIX)_manual

clean:
	rm -f *~ *.o $(PREFIX)_gcc*.s *.disassembled *.static $(PREFIX) $(PREFIX)_manual
