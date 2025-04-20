//-----------------------------------------------------------------------------
#ifndef __UART1_H
#define __UART1_H


//-----------------------------------------------------------------------------
#include "ht32.h"

//-----------------------------------------------------------------------------
#define UART1_BUF_SIZE 256
#define UART1_FIFO_LEN 1

//-----------------------------------------------------------------------------
typedef struct
{
  u8 buffer[UART1_BUF_SIZE];
  u16 write_pt;
  u16 read_pt;
  u16 cnt;
}_UART1_STRUCT;

//-----------------------------------------------------------------------------
void UART1_Configuration(void);
void UART1_init_buffer (void);
void UART1_analyzer_data(void);
void UART1_tx_data(u8 *pt, u8 len);
void UART1_receive_bytes(u8 *buffer, u16 len);
void UART1_test(void);

//-----------------------------------------------------------------------------
#endif

