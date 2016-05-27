/* mmio.h
 * 
 * Copyright (C) 2015 Nur Hussein <hussein@unixcat.org>
 * Basic I/O functions based on Linux code:
 *                     (c) 1991, 1992 Linus Torvalds
 *                     (c) 2007 rPath, Inc
 *                     (c) 2009 Intel Corporation (author H. Peter Anvin) 
 *
 * Licensed under the GPL v2. See COPYING for more details.
 *
 * Memory-mapped IO functions and headers for x86.
 * -------------------------------------------------------------------------
 *
 * Basic MMIO functions.
 *
 */

#ifndef __FANG_MMIO_H
#define __FANG_MMIO_H

/* Basic port I/O ripped from Linux */

static inline void outb(uint8_t v, uint16_t port)
{
	asm volatile("outb %0,%1" : : "a" (v), "dN" (port));
}

static inline uint8_t inb(uint16_t port)
{
	uint8_t v;
	asm volatile("inb %1,%0" : "=a" (v) : "dN" (port));
	return v;
}

static inline void outw(uint16_t v, uint16_t port)
{
	asm volatile("outw %0,%1" : : "a" (v), "dN" (port));
}

static inline uint16_t inw(uint16_t port)
{
	uint16_t v;
	asm volatile("inw %1,%0" : "=a" (v) : "dN" (port));
	return v;
}

static inline void outl(uint32_t v, uint16_t port)
{
	asm volatile("outl %0,%1" : : "a" (v), "dN" (port));
}

static inline uint32_t inl(uint16_t port)
{
	uint32_t v;
	asm volatile("inl %1,%0" : "=a" (v) : "dN" (port));
	return v;
}

#endif /* __FANG_MMIO_H */
