/**
  @Company
    Microchip Technology Inc.

  @Description
    This Source file provides APIs.
    Generation Information :
    Driver Version    :   1.0.0
*/

#ifndef PINS_H_INCLUDED
#define PINS_H_INCLUDED

#include <avr/io.h>
#include "./port.h"

//get/set IO_PC1 aliases
#define IO_PC1_SetHigh() do { PORTC_OUTSET = 0x2; } while(0)
#define IO_PC1_SetLow() do { PORTC_OUTCLR = 0x2; } while(0)
#define IO_PC1_Toggle() do { PORTC_OUTTGL = 0x2; } while(0)
#define IO_PC1_GetValue() (VPORTC.IN & (0x1 << 1))
#define IO_PC1_SetDigitalInput() do { PORTC_DIRCLR = 0x2; } while(0)
#define IO_PC1_SetDigitalOutput() do { PORTC_DIRSET = 0x2; } while(0)
#define IO_PC1_SetPullUp() do { PORTC_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PC1_ResetPullUp() do { PORTC_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PC1_SetInverted() do { PORTC_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PC1_ResetInverted() do { PORTC_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PC1_DisableInterruptOnChange() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PC1_EnableInterruptForBothEdges() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PC1_EnableInterruptForRisingEdge() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PC1_EnableInterruptForFallingEdge() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PC1_DisableDigitalInputBuffer() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PC1_EnableInterruptForLowLevelSensing() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set IO_PC0 aliases
#define IO_PC0_SetHigh() do { PORTC_OUTSET = 0x1; } while(0)
#define IO_PC0_SetLow() do { PORTC_OUTCLR = 0x1; } while(0)
#define IO_PC0_Toggle() do { PORTC_OUTTGL = 0x1; } while(0)
#define IO_PC0_GetValue() (VPORTC.IN & (0x1 << 0))
#define IO_PC0_SetDigitalInput() do { PORTC_DIRCLR = 0x1; } while(0)
#define IO_PC0_SetDigitalOutput() do { PORTC_DIRSET = 0x1; } while(0)
#define IO_PC0_SetPullUp() do { PORTC_PIN0CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PC0_ResetPullUp() do { PORTC_PIN0CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PC0_SetInverted() do { PORTC_PIN0CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PC0_ResetInverted() do { PORTC_PIN0CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PC0_DisableInterruptOnChange() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PC0_EnableInterruptForBothEdges() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PC0_EnableInterruptForRisingEdge() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PC0_EnableInterruptForFallingEdge() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PC0_DisableDigitalInputBuffer() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PC0_EnableInterruptForLowLevelSensing() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set DebugGPIO0_SW0 aliases
#define DebugGPIO0_SW0_SetHigh() do { PORTC_OUTSET = 0x80; } while(0)
#define DebugGPIO0_SW0_SetLow() do { PORTC_OUTCLR = 0x80; } while(0)
#define DebugGPIO0_SW0_Toggle() do { PORTC_OUTTGL = 0x80; } while(0)
#define DebugGPIO0_SW0_GetValue() (VPORTC.IN & (0x1 << 7))
#define DebugGPIO0_SW0_SetDigitalInput() do { PORTC_DIRCLR = 0x80; } while(0)
#define DebugGPIO0_SW0_SetDigitalOutput() do { PORTC_DIRSET = 0x80; } while(0)
#define DebugGPIO0_SW0_SetPullUp() do { PORTC_PIN7CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define DebugGPIO0_SW0_ResetPullUp() do { PORTC_PIN7CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define DebugGPIO0_SW0_SetInverted() do { PORTC_PIN7CTRL  |= PORT_INVEN_bm; } while(0)
#define DebugGPIO0_SW0_ResetInverted() do { PORTC_PIN7CTRL  &= ~PORT_INVEN_bm; } while(0)
#define DebugGPIO0_SW0_DisableInterruptOnChange() do { PORTC.PIN7CTRL = (PORTC.PIN7CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define DebugGPIO0_SW0_EnableInterruptForBothEdges() do { PORTC.PIN7CTRL = (PORTC.PIN7CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define DebugGPIO0_SW0_EnableInterruptForRisingEdge() do { PORTC.PIN7CTRL = (PORTC.PIN7CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define DebugGPIO0_SW0_EnableInterruptForFallingEdge() do { PORTC.PIN7CTRL = (PORTC.PIN7CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define DebugGPIO0_SW0_DisableDigitalInputBuffer() do { PORTC.PIN7CTRL = (PORTC.PIN7CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define DebugGPIO0_SW0_EnableInterruptForLowLevelSensing() do { PORTC.PIN7CTRL = (PORTC.PIN7CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set DebugGPIO1_LED aliases
#define DebugGPIO1_LED_SetHigh() do { PORTC_OUTSET = 0x40; } while(0)
#define DebugGPIO1_LED_SetLow() do { PORTC_OUTCLR = 0x40; } while(0)
#define DebugGPIO1_LED_Toggle() do { PORTC_OUTTGL = 0x40; } while(0)
#define DebugGPIO1_LED_GetValue() (VPORTC.IN & (0x1 << 6))
#define DebugGPIO1_LED_SetDigitalInput() do { PORTC_DIRCLR = 0x40; } while(0)
#define DebugGPIO1_LED_SetDigitalOutput() do { PORTC_DIRSET = 0x40; } while(0)
#define DebugGPIO1_LED_SetPullUp() do { PORTC_PIN6CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define DebugGPIO1_LED_ResetPullUp() do { PORTC_PIN6CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define DebugGPIO1_LED_SetInverted() do { PORTC_PIN6CTRL  |= PORT_INVEN_bm; } while(0)
#define DebugGPIO1_LED_ResetInverted() do { PORTC_PIN6CTRL  &= ~PORT_INVEN_bm; } while(0)
#define DebugGPIO1_LED_DisableInterruptOnChange() do { PORTC.PIN6CTRL = (PORTC.PIN6CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define DebugGPIO1_LED_EnableInterruptForBothEdges() do { PORTC.PIN6CTRL = (PORTC.PIN6CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define DebugGPIO1_LED_EnableInterruptForRisingEdge() do { PORTC.PIN6CTRL = (PORTC.PIN6CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define DebugGPIO1_LED_EnableInterruptForFallingEdge() do { PORTC.PIN6CTRL = (PORTC.PIN6CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define DebugGPIO1_LED_DisableDigitalInputBuffer() do { PORTC.PIN6CTRL = (PORTC.PIN6CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define DebugGPIO1_LED_EnableInterruptForLowLevelSensing() do { PORTC.PIN6CTRL = (PORTC.PIN6CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

void PIN_MANAGER_Initialize();
void PC1_DefaultInterruptHandler(void);
void PC1_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PC0_DefaultInterruptHandler(void);
void PC0_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PC7_DefaultInterruptHandler(void);
void PC7_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PC6_DefaultInterruptHandler(void);
void PC6_SetInterruptHandler(void (* interruptHandler)(void)) ; 
#endif /* PINS_H_INCLUDED */