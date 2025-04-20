//-----------------------------------------------------------------------------
#ifndef __UART0_H
#define __UART0_H


//-----------------------------------------------------------------------------
#include "ht32.h"

//-----------------------------------------------------------------------------
#define UART0_BUF_SIZE 256
#define UART0_FIFO_LEN 1

//-----------------------------------------------------------------------------
typedef struct
{
  u8 buffer[UART0_BUF_SIZE];
  u16 write_pt;
  u16 read_pt;
  u16 cnt;
}_UART0_STRUCT;

//-----------------------------------------------------------------------------
void UART0_Configuration(void);
void UART0_init_buffer (void);
void UART0_analyzer_data(void);
void UART0_tx_data(u8 *pt, u8 len);
void UART0_receive_bytes(u8 *buffer, u16 len);
void UART0_test(void);

//-----------------------------------------------------------------------------
#endif

