/* boot.h
 * 
 * Copyright (C) 2015 Nur Hussein <hussein@unixcat.org>
 *
 * Licensed under the GPL v2. See COPYING for more details.
 *
 * Boot headers for x86. 
 * -------------------------------------------------------------------------
 *
 * We assume we start off after being started by a multiboot bootloader.
 *
 */


/* Multiboot header constants */

#define MULTIBOOT_MAGIC		0x1BADB002
#define MULTIBOOT_ALIGN		(1<<0)
#define MULTIBOOT_MEMINFO	(1<<1)
#define MULTIBOOT_FLAGS		(MULTIBOOT_ALIGN | MULTIBOOT_MEMINFO)
#define MULTIBOOT_CHECKSUM	-(MULTIBOOT_MAGIC + MULTIBOOT_FLAGS)

/* Size of the initial stack */

#define BOOTSTRAP_STACK_SIZE	16384
