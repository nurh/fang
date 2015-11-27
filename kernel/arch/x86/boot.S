/* boot.S
 * 
 * Copyright (C) 2015 Nur Hussein <hussein@unixcat.org>
 *
 * -------------------------------------------------------------------------
 *
 * Boot code on x86.
 *
 */

#include <boot.h>

/* Start off with the multiboot header */

.section .multiboot
.global _multiboot

.align 4
.long MULTIBOOT_MAGIC
.long MULTIBOOT_FLAGS
.long MULTIBOOT_CHECKSUM

/* The initial bootstrap stack */

.section .bootstrap_stack, "aw", @nobits
stack_bottom:
.skip BOOTSTRAP_STACK_SIZE
stack_top:

.section .text
.global _start
.type _start, @function
_start:
	
/* Load up the stack pointer */
movl $stack_top, %esp 

/* This should never return */
call kernel_main

/* However in case it does return, we need to halt the system. */
cli
hlt

/* And in case the halt instruction doesn't work, there's this busyloop. */
.failsafeloop:
jmp .failsafeloop

/* This is useful for debugging, according to the OSDev wiki */
.size _start, . - _start
