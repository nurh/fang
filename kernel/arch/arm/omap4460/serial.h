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

#define UART3_THR (UART3_BASE + 0x0)
#define UART3_LSR (UART3_BASE + 0x14)

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
