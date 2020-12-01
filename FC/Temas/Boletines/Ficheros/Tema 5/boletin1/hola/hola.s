	.file	"hola.c"
	.section	.rodata
.LC0:
	.string	"Hola, mundo!"
	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	$.LC0, %edi
	call	puts
	popq	%rbp
	ret
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.5-4ubuntu8) 4.8.5"
	.section	.note.GNU-stack,"",@progbits
