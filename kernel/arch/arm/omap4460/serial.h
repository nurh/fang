/* 
 * Basic serial port support for OMAP4460 devices (Pandaboard ES)
 * --------------------------------------------------------------
 *
 *  Register information was gleaned from TI OMAP4460 Technical Reference Manual,
 *  referenced in the Bibliography as [4460TRM].
 *
 *  UART3 is the physical serial port on the Pandaboard ES, and the one we're 
 *  interested in primarily.
 *
 *  Table 23-167 of the [4460TRM] describes register addresses of UART3.
 *
 */

/* Base Addresses */

#define UART3_BASE 0x48020000

/* Register addresses (BASE + OFFSET) */

#define UART3_THR (UART3_BASE + 0x0)
#define UART3_LSR (UART3_BASE + 0x14)
