	.file	"addsubtmult.c"
	.section	.rodata
.LC0:
	.string	"enter values"
.LC1:
	.string	"%d %d"
.LC2:
	.string	"sum=%d\n"
.LC3:
	.string	"sub=%d\n"
.LC4:
	.string	"mult=%d\n"
.LC5:
	.string	"divide=%f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$.LC0, %edi
	call	puts
	leaq	-28(%rbp), %rdx
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	-32(%rbp), %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	movl	-32(%rbp), %edx
	movl	-28(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	-32(%rbp), %edx
	movl	-28(%rbp), %eax
	imull	%edx, %eax
	movl	%eax, -16(%rbp)
	movl	-32(%rbp), %eax
	pxor	%xmm0, %xmm0
	cvtsi2ss	%eax, %xmm0
	movl	-28(%rbp), %eax
	pxor	%xmm1, %xmm1
	cvtsi2ss	%eax, %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -12(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	movl	-16(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	cvtss2sd	-12(%rbp), %xmm0
	movl	$.LC5, %edi
	movl	$1, %eax
	call	printf
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L3
	call	__stack_chk_fail
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
