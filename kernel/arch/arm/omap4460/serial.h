/* serial.h
 *
 * Copyright (C) 2015 Nur Hussein
 * Licensed under the GPL v2. See COPYING for more details.
 *
 * Basic serial port support for OMAP4460 devices (Pandaboard ES)
 * -------------------------------------------------------------------------
 *
 *  Register information was gleaned from TI OMAP4460 Technical Reference 
 *  Manual, referenced in the Bibliography as [4460TRM].
 *
 *  UART3 is the physical serial port on the Pandaboard ES, and the one we 
 *  are interested in primarily.
 *
 *  Table 23-167 of the [4460TRM] describes register addresses of UART3.
 *
 *  Table 23-133 of the [4460TRM] lists baud rates and divisors.
 *  
 */

/* Base Addresses */

#define UART3_BASE 0x48020000

/* Register addresses (BASE + OFFSET) */

#define UART3_THR (UART3_BASE + 0x00) /* THR == Transmit Holding Register - 64 bytes of FIFO */
#define UART3_RHR (UART3_BASE + 0x00) /* RHR == Receiver Holding Register */
#define UART3_DLL (UART3_BASE + 0x00) /* Divisor low */
#define UART3_IER (UART3_BASE + 0x04) /* IER == Interrupt Enable Register */ 
#define UART3_DLH (UART3_BASE + 0x04) /* Divisor high */
#define UART3_FCR (UART3_BASE + 0x08) /* FCR == FIFO Control Register */
#define UART3_LCR (UART3_BASE + 0x0C) /* LCR == Line Control Register */
#define UART3_MCR (UART3_BASE + 0x10) /* MCR == Modem Control Register */
#define UART3_LSR (UART3_BASE + 0x14) /* LSR == Line Status Register */
#define UART3_MSR (UART3_BASE + 0x18) /* MSR == Modem Status Register */
#define UART3_SPR (UART3_BASE + 0x1C) /* SPR == Scratch Pad Register - for storing temp data */
#define UART3_MDR1 (UART3_BASE + 0x20) /* MDR1 == Mode Definition Register 1 */

/* Divisors, depending on baud rate. Not a comprehensive list. */

#define	BAUD_300_DIVISOR	0x2710
#define BAUD_600_DIVISOR	0x1388
#define BAUD_1200_DIVISOR	0x09C4
#define BAUD_2400_DIVISOR	0x04E2
#define BAUD_4800_DIVISOR	0x0271
#define BAUD_9600_DIVISOR	0x0138
#define BAUD_14400_DIVISOR	0x00D0
#define BAUD_19200_DIVISOR	0x009C
#define BAUD_28800_DIVISOR	0x02C0
#define BAUD_38400_DIVISOR	0x004E
#define BAUD_57600_DIVISOR	0x0034
#define BAUD_115200_DIVISOR	0x001A
