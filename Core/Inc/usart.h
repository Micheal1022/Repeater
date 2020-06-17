/**
  ******************************************************************************
  * File Name          : USART.h
  * Description        : This file provides code for the configuration
  *                      of the USART instances.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __usart_H
#define __usart_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart2;

/* USER CODE BEGIN Private defines */
#define RS485_RECV 	HAL_GPIO_WritePin(RS485_CON_GPIO_Port, RS485_CON_Pin, GPIO_PIN_RESET)  //写状
#define RS485_SEND	HAL_GPIO_WritePin(RS485_CON_GPIO_Port, RS485_CON_Pin, GPIO_PIN_SET);   //读状

#define TARG     0
#define CODE	 1
#define ADDR_H   2
#define ADDR_L   3
#define NUM_H    4
#define NUM_L    5
#define CRC_H    6
#define CRC_L    7

#define CMD	1
#define TYPE	2
#define STATE	3
#define SIZE	4
#define VALUE_1_H	5
#define VALUE_1_L	6
#define VALUE_2_H	7
#define VALUE_2_L	8
#define VALUE_3_H	9
#define VALUE_3_L	10
#define UCRC_H		11
#define UCRC_L		12





#define CMD_STATE 	0x01	//获取状�??
#define CMD_VALUE 	0x02	//获取数�??
#define CMD_CODES 	0x03	//功能�?
#define CMD_DEV	    0x64    //设备状�?�地�?�?

#define DEV_NORMAL	0x00	//正常
#define DEV_COVER	0x01	//遮挡
#define DEV_DISCO	0x02	//断网
#define DEV_CODIS	0x03	//遮挡和断�?
#define DEV_STATE   0x64


#define VALUELEN	11
#define STATELEN	7

#define LEN			2
#define MAX_VALUE_H	3
#define MAX_VALUE_L 4
#define AVE_VALUE_H 5
#define AVE_VALUE_L 6
#define MIN_VALUE_H 7
#define MIN_VALUE_L 8

#define DEV_TYPE	0x09


extern uint8_t Uart2RS485[8];
extern uint8_t RS4852Uart[11];
extern uint8_t dev_state;
extern uint8_t dev_type;
/* USER CODE END Private defines */

void MX_USART1_UART_Init(void);
void MX_USART2_UART_Init(void);

/* USER CODE BEGIN Prototypes */
uint16_t N_CRC16(uint8_t *data,uint8_t len);
void Uart_2_RS485(uint8_t *data, uint8_t len);
void RS485_2_Uart(uint8_t *data, uint8_t len);
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ usart_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
