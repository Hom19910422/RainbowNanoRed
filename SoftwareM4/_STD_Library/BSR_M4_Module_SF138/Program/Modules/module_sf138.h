/* #include "module_sf138.h" */

#ifndef __MODULE_SF138_H
#define __MODULE_SF138_H

#include "stm32f30x.h"
/*====================================================================================================*/
/*====================================================================================================*/
void SF138_Config( void );
void SF138_Cmd( FunctionalState NewState );
void SF138_WriteData( uint8_t writeData );
/*====================================================================================================*/
/*====================================================================================================*/
#endif
