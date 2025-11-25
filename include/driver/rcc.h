//
// Created by Alessandro Nardinelli on 24/11/25.
//

#ifndef OPENCAS_RCC_H
#define OPENCAS_RCC_H
#pragma once

#include "stm32wb55xx.h"

//define the name of the condition to be enabled/disabled
enum RCC_PERIPHERAL
{
      SYS_CFG,
      GPIO_A_PER,
      GPIO_B_PER,
      GPIO_C_PER,
      GPIO_D_PER,
      GPIO_E_PER,
      I2C_PER,
      SPI_PER,
      TIM1_PER,
      EXTI_PER,
      LCD_PER,
};

uint8_t initRCC(void);

//enable the clock on the designated peripheral
void enableRCC(const enum RCC_PERIPHERAL rcc_per);

//disable the clock on the designated peripheral
void diableRCC(const enum RCC_PERIPHERAL rcc_per);


#endif //OPENCAS_RCC_H