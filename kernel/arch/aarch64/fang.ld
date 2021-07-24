SECTIONS
{
	ENTRY(_start)
	. = 0x8000;
	.text : { *(.text) } :text
	.data : { *(.data) } :data
	.bss : { *(.bss) } :data
}
