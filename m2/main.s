	.cpu arm7tdmi
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 6
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"main.c"
	.comm	buffer,10,4
	.text
	.align	2
	.global	main
	.syntax unified
	.arm
	.fpu softvfp
	.type	main, %function
main:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #8
	mov	r1, #10
	ldr	r0, .L5
	bl	clear_all
	ldr	r3, .L5+4
	mov	r2, #2
	mov	r1, #43
	mov	r0, r3
	bl	set_all
	mov	r2, #97
	mov	r1, #0
	ldr	r0, .L5
	bl	set_value
	mov	r1, #9
	ldr	r0, .L5
	bl	get_value
	mov	r3, r0
	strb	r3, [fp, #-9]
	ldrb	r3, [fp, #-9]
	add	r3, r3, #39
	and	r3, r3, #255
	mov	r2, r3
	mov	r1, #9
	ldr	r0, .L5
	bl	set_value
	mov	r2, #55
	mov	r1, #3
	ldr	r0, .L5
	bl	set_value
	mov	r2, #88
	mov	r1, #1
	ldr	r0, .L5
	bl	set_value
	mov	r2, #50
	mov	r1, #4
	ldr	r0, .L5
	bl	set_value
	mov	r1, #1
	ldr	r0, .L5
	bl	get_value
	mov	r3, r0
	strb	r3, [fp, #-9]
	mov	r2, #121
	mov	r1, #2
	ldr	r0, .L5
	bl	set_value
	ldrb	r3, [fp, #-9]
	sub	r3, r3, #12
	and	r3, r3, #255
	mov	r2, r3
	mov	r1, #7
	ldr	r0, .L5
	bl	set_value
	mov	r2, #95
	mov	r1, #5
	ldr	r0, .L5
	bl	set_value
	mov	r3, #0
	str	r3, [fp, #-8]
	b	.L2
.L3:
	ldr	r3, [fp, #-8]
	add	r3, r3, #1
	str	r3, [fp, #-8]
.L2:
	ldr	r3, [fp, #-8]
	cmp	r3, #9
	bls	.L3
	mov	r3, #0
	mov	r0, r3
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
.L6:
	.align	2
.L5:
	.word	buffer
	.word	buffer+8
	.size	main, .-main
	.ident	"GCC: (15:6.3.1+svn253039-1build1) 6.3.1 20170620"
