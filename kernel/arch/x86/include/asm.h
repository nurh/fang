static inline cli(void) {
	__asm_ volatile("cli");
}

static inline hlt(void) {
	__asm__ volatile("hlt");
}
