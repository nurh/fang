#ifndef __FANG_ASM_H
#define __FANG_ASM_H

static inline cli(void) {
	__asm__ volatile("cli"); /* Clear interrupts */
}

static inline hlt(void) {
	__asm__ volatile("hlt"); /* Halt */
}

#endif /* __FANG_ASM_H */
