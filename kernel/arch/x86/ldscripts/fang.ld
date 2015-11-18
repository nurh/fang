SECTIONS
{
	ENTRY(_start)
	. = 0x100000;
	.text : { *(.text) } :text
	.data : { *(.data) } :data
	.bss : { *(.bss) } :data
}
