// Generate variable frames for sending data to the MPLAB Data Visualizer, 
// e.g. to be display on a graph.
#include <stdint.h>
#include "../../uart/usart1.h"

#define DATA_STREAMER_START_BYTE 3  //trivial Data Streamer Protocol start of frame token
#define DATA_STREAMER_END_BYTE (255 - DATA_STREAMER_START_BYTE)  
// Data Streamer Protocol end byte is the One's compliment (~) of startByte, 
// e.g. startByte: 0b0000 0011, endByte: 0b1111 1100

void variableWrite_sendFrame(uint8_t sampleNumber, uint16_t ADC_12bit)
{
   USART1_Write(DATA_STREAMER_START_BYTE);  

   USART1_Write(sampleNumber);                // uint8_t

   USART1_Write((ADC_12bit >> 0)  & 0xFF); // Low  byte of uint16_t 
   USART1_Write((ADC_12bit >> 8)  & 0xFF); // High byte

   USART1_Write(DATA_STREAMER_END_BYTE);  
}