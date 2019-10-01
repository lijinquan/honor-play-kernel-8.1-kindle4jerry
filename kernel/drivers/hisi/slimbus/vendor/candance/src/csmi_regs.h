/* Copyright (C) 2014 Cadence Design Systems.  All rights reserved			 */
/* THIS FILE IS AUTOMATICALLY GENERATED BY CADENCE BLUEPRINT, DO NOT EDIT	 */
/*																			 */


#ifndef __REG_CSMI_REGS_H__
#define __REG_CSMI_REGS_H__

#include "csmi_regs_macro.h"

struct CONFIGURATION {
  volatile uint32_t CONFIG_MODE;				  /*		0x0 - 0x4		 */
  volatile uint32_t CONFIG_EA;					  /*		0x4 - 0x8		 */
  volatile uint32_t CONFIG_PR_TP;				  /*		0x8 - 0xc		 */
  volatile uint32_t CONFIG_FR;					  /*		0xc - 0x10		 */
  volatile uint32_t CONFIG_DPORT;				  /*	   0x10 - 0x14		 */
  volatile uint32_t CONFIG_CPORT;				  /*	   0x14 - 0x18		 */
  volatile uint32_t CONFIG_EA2; 				  /*	   0x18 - 0x1c		 */
  volatile uint32_t CONFIG_THR; 				  /*	   0x1c - 0x20		 */
};

struct COMMAND_STATUS {
  volatile uint32_t COMMAND;					  /*		0x0 - 0x4		 */
  volatile uint32_t STATE;						  /*		0x4 - 0x8		 */
  volatile uint32_t IE_STATE;					  /*		0x8 - 0xc		 */
  volatile uint32_t MCH_USAGE;					  /*		0xc - 0x10		 */
};

struct INTERRUPTS {
  volatile uint32_t INT_EN; 					  /*		0x0 - 0x4		 */
  volatile uint32_t INT;						  /*		0x4 - 0x8		 */
};

struct MESSAGE_FIFOS {
  volatile uint32_t MC_FIFO[16];				  /*		0x0 - 0x40		 */
};

struct PORT_INTERRUPTS {
  volatile uint32_t P_INT_EN[16];				  /*		0x0 - 0x40		 */
  volatile uint32_t P_INT[16];					  /*	   0x40 - 0x80		 */
};

struct PORT_STATE {
  volatile uint32_t P_STATE_0;					  /*		0x0 - 0x4		 */
  volatile uint32_t P_STATE_1;					  /*		0x4 - 0x8		 */
};

struct PORT_FIFO_SPACE {
  volatile uint32_t PORT_FIFO[16];				  /*		0x0 - 0x40		 */
};

struct csmi_regs {
  struct CONFIGURATION CONFIGURATION;			  /*		0x0 - 0x20		 */
  struct COMMAND_STATUS COMMAND_STATUS; 		  /*	   0x20 - 0x30		 */
  volatile char pad__0[0x8];					  /*	   0x30 - 0x38		 */
  struct INTERRUPTS INTERRUPTS; 				  /*	   0x38 - 0x40		 */
  struct MESSAGE_FIFOS MESSAGE_FIFOS;			  /*	   0x40 - 0x80		 */
  struct PORT_INTERRUPTS PORT_INTERRUPTS;		  /*	   0x80 - 0x100 	 */
  struct PORT_STATE PORT_STATE[64]; 			  /*	  0x100 - 0x300 	 */
  volatile char pad__1[0xd00];					  /*	  0x300 - 0x1000	 */
  struct PORT_FIFO_SPACE PORT_FIFO_SPACE[64];	  /*	 0x1000 - 0x2000	 */
};

#endif /* __REG_CSMI_REGS_H__ */