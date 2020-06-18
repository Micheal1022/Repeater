/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stm32f1xx_hal_uart.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */
#define RS485_RECV 	HAL_GPIO_WritePin(RS485_CON_GPIO_Port, RS485_CON_Pin, GPIO_PIN_SET)      //接收
#define RS485_SEND	HAL_GPIO_WritePin(RS485_CON_GPIO_Port, RS485_CON_Pin, GPIO_PIN_RESET);   //发�??
/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RS485_TX_Pin GPIO_PIN_2
#define RS485_TX_GPIO_Port GPIOA
#define RS485_RX_Pin GPIO_PIN_3
#define RS485_RX_GPIO_Port GPIOA
#define RS485_CON_Pin GPIO_PIN_4
#define RS485_CON_GPIO_Port GPIOA
#define POW_LED_Pin GPIO_PIN_0
#define POW_LED_GPIO_Port GPIOB
#define PBUS_TX_LED_Pin GPIO_PIN_1
#define PBUS_TX_LED_GPIO_Port GPIOB
#define PBUS_RX_LED_Pin GPIO_PIN_2
#define PBUS_RX_LED_GPIO_Port GPIOB
#define RS485_TX_LED_Pin GPIO_PIN_10
#define RS485_TX_LED_GPIO_Port GPIOB
#define RS485_RX_LED_Pin GPIO_PIN_11
#define RS485_RX_LED_GPIO_Port GPIOB
#define PBUS_TX_Pin GPIO_PIN_9
#define PBUS_TX_GPIO_Port GPIOA
#define PBUS_RX_Pin GPIO_PIN_10
#define PBUS_RX_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */
#define _on		1
#define _off	0
extern uint8_t RS485_RX_Flag ;
extern uint8_t RS485_TX_Flag ;
extern uint8_t PBUS_RX_Flag;
extern uint8_t PBUS_TX_Flag;
//extern uint8_t rs485Data[1];
//extern uint8_t pbusData[1];
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
