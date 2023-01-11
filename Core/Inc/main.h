/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BUZZER_Pin GPIO_PIN_0
#define BUZZER_GPIO_Port GPIOA
#define V_METER_Pin GPIO_PIN_1
#define V_METER_GPIO_Port GPIOA
#define RECEIV_2_Pin GPIO_PIN_4
#define RECEIV_2_GPIO_Port GPIOA
#define RECEIV_1_Pin GPIO_PIN_5
#define RECEIV_1_GPIO_Port GPIOA
#define M1_ENC_A_Pin GPIO_PIN_6
#define M1_ENC_A_GPIO_Port GPIOA
#define M1_ENC_B_Pin GPIO_PIN_7
#define M1_ENC_B_GPIO_Port GPIOA
#define RECEIV_3_Pin GPIO_PIN_0
#define RECEIV_3_GPIO_Port GPIOB
#define RECEIV_4_Pin GPIO_PIN_1
#define RECEIV_4_GPIO_Port GPIOB
#define EMIT_4_Pin GPIO_PIN_10
#define EMIT_4_GPIO_Port GPIOB
#define EMIT_2_Pin GPIO_PIN_11
#define EMIT_2_GPIO_Port GPIOB
#define EMIT_1_Pin GPIO_PIN_12
#define EMIT_1_GPIO_Port GPIOB
#define M2_FWD_Pin GPIO_PIN_13
#define M2_FWD_GPIO_Port GPIOB
#define M1_BACK_Pin GPIO_PIN_14
#define M1_BACK_GPIO_Port GPIOB
#define M2_BACK_Pin GPIO_PIN_15
#define M2_BACK_GPIO_Port GPIOB
#define M1_FWD_Pin GPIO_PIN_8
#define M1_FWD_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_11
#define LED_RED_GPIO_Port GPIOA
#define LED_BLUE_Pin GPIO_PIN_12
#define LED_BLUE_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_15
#define LED_GREEN_GPIO_Port GPIOA
#define Button_Pin GPIO_PIN_4
#define Button_GPIO_Port GPIOB
#define EMIT_3_Pin GPIO_PIN_5
#define EMIT_3_GPIO_Port GPIOB
#define M2_ENC_B_Pin GPIO_PIN_6
#define M2_ENC_B_GPIO_Port GPIOB
#define M2_ENC_A_Pin GPIO_PIN_7
#define M2_ENC_A_GPIO_Port GPIOB
#define M2_SPD_Pin GPIO_PIN_8
#define M2_SPD_GPIO_Port GPIOB
#define M1_SPD_Pin GPIO_PIN_9
#define M1_SPD_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
