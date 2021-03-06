/* mmio.h
 *
 * Copyright (C) 2015 Nur Hussein <hussein@unixcat.org>
 * MMIO functions inspired by code written 
 * by Goswin von Brederlow <goswin-v-b@web.de>
 *
 * Licensed under the GPL v2. See COPYING for more details.
 *
 * Memory-mapped IO functions and headers.
 * -------------------------------------------------------------------------
 *
 * Basic MMIO functions.
 *
 */

#ifndef __FANG_MMIO_H
#define __FANG_MMIO_H

static inline void mmio_write(uint32_t reg_addr, uint32_t val)
{
	uint32_t *reg_ptr = (uint32_t*) reg_addr;

	asm volatile("str %[val], [%[reg_addr]]" : : [reg_addr]"r"(reg_ptr), [val]"r"(val));
}

static inline uint32_t mmio_read(uint32_t reg_addr)
{
	uint32_t val;
	uint32_t *reg_ptr = (uint32_t*)reg_addr;

	asm volatile("ldr %[val], [%[reg]]" : [val]"=r"(val) : [reg_addr]"r"(reg_ptr));
	return val;
}

#endif /* __FANG_MMIO_H */
