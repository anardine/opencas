//
// Created by Alessandro Nardinelli on 24/11/25.
//

#include "driver/rcc.h"


//Enable the clock on the designated peripheral
void enableRCC(const enum RCC_PERIPHERAL rcc_per) {

    switch (rcc_per) {
        case SYS_CFG:
            // Enable here the RCC register for SYS_CFG
            break;
        case GPIO_A_PER:
            // Enable here the RCC register for GPIO_A_PER
            break;
        case GPIO_B_PER:
            // Enable here the RCC register for GPIO_B_PER
            break;
        case GPIO_C_PER:
            // Enable here the RCC register for GPIO_C_PER
            break;
        case GPIO_D_PER:
            // Enable here the RCC register for GPIO_D_PER
            break;
        case GPIO_E_PER:
            // Enable here the RCC register for GPIO_E_PER
            break;
        case I2C_PER:
            // Enable here the RCC register for I2C_PER
            break;
        case SPI_PER:
            // Enable here the RCC register for SPI_PER
            break;
        case TIM1_PER:
            // Enable here the RCC register for TIM1_PER
            break;
        case EXTI_PER:
            // Enable here the RCC register for EXTI_PER
            break;
        case LCD_PER:
            // Enable here the RCC register for LCD_PER
            break;
        default:
            // Handle unknown value
            break;
    }

}

//Disable the clock on the designated peripheral
void diableRCC(const enum RCC_PERIPHERAL rcc_per) {




}