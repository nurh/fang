static inline cli(void) {
	__asm__ volatile("cli");
}

static inline hlt(void) {
	__asm__ volatile("hlt");
}
