ENTRY(_start)

SECTIONS
{
	. = 0x100000;

	.text : 
	{ 
		. = ALIGN(4096);
		*(.multiboot)
		*(.text) 
	}

	.data : 
	{ 
		. = ALIGN(4096);
		*(.rodata)
		*(.data) 
	}
	
	.bss  : 
	{ 
		. = ALIGN(4096);
		*(.bss)  
		*(.bootstrap_stack)
	}
 }
