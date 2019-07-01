/*
 * hardware.h
 *
 *  Created on: May 20, 2019
 *      Author: Renan Augusto Starke
 *      Instituto Federal de Santa Catarina
 * 
 * 
 * riscv-multicycle Hardware Map (registers)
 * -----------------------------------------
 * IO MAP mapped to  addr >= 0x40000 
 * 
 * 
 */


#ifndef __HARDWARE_H
#define __HARDWARE_H

#include <stdint.h>

#define CPU_CLOCK 1000000     /*!< PLL is adjusted to 1 MHz */

#ifndef _IO
#define _IO volatile uint8_t
#endif

#ifndef _IO16
#define _IO16 volatile uint16_t
#endif

#ifndef _IO32
#define _IO32 volatile uint32_t
#endif

#define PERIPH_BASE		((uint32_t)0x4000000)          /*!< Peripheral base address */

#define SDRAM_BASE		((uint32_t)0x6000000)          /*!< Peripheral base address */

#define INDATA_ADC		(*(_IO32 *) (PERIPH_BASE))		/*!< Generic INPUT BUS - 32-bit register */
#define CH_ADC_FEED		(*(_IO32 *) (PERIPH_BASE + 4))	/*!< Generic OUPUT BUS - 32-bit register */
#define SEL_CH_ADC		(*(_IO32 *) (PERIPH_BASE + 8))	
#define OUT_SEGS		(*(_IO32 *) (PERIPH_BASE + 12))	



#define SDRAM 			(*(_IO32 *) (SDRAM_BASE))		/*!< SDRAM base address */

#endif //HARDWARE_H