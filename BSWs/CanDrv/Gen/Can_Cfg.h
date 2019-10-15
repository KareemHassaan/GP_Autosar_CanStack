/*************************************************************************************
FileName:                   Can_Cfg.h                                      
AUTOSAR Version:            4.2.2
*************************************************************************************/
#ifndef CAN_CFG_H
#define CAN_CFG_H


/*************************************************************************************

 **                                   Includes                                       **

 *************************************************************************************/

#include "Can_GeneralTypes.h"
/************************************************************************************/


#define Can0RxProcessing	POLLING
#define Can1RxProcessing	INTERRUPT
#define Can0TxProcessing	POLLING
#define Can1TxProcessing	INTERRUPT
#define Can0BusoffProcessing	INTERRUPT
#define	Can1BusoffProcessing	INTERRUPT

extern Can_ConfigType Can;
#endif /** (CAN_CFG_H) **/
