#include <asm.h>

/* TODO: Add a panic message */
 
void * panic(void) {
	cli();

	while(1) {
		hlt();
	}	
}
