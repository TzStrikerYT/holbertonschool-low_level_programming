	.file	"6-size.c"
	.intel_syntax noprefix
	.section	.rodata
.LC0:
	.string	"Size of a char: %u byte(s)\n"
.LC1:
	.string	"Size of an int: %u byte(s)\n"
	.align 8
.LC2:
	.string	"Size of a long int: %u byte(s)\n"
	.align 8
.LC3:
	.string	"Size of a long long int: %u byte(s)\n"
.LC4:
	.string	"Size of a float: %u byte(s)\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	esi, 1
	mov	edi, OFFSET FLAT:.LC0
	mov	eax, 0
	call	printf
	mov	esi, 4
	mov	edi, OFFSET FLAT:.LC1
	mov	eax, 0
	call	printf
	mov	esi, 8
	mov	edi, OFFSET FLAT:.LC2
	mov	eax, 0
	call	printf
	mov	esi, 8
	mov	edi, OFFSET FLAT:.LC3
	mov	eax, 0
	call	printf
	mov	esi, 4
	mov	edi, OFFSET FLAT:.LC4
	mov	eax, 0
	call	printf
	mov	eax, 0
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
