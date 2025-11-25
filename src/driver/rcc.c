//
// Created by Alessandro Nardinelli on 24/11/25.
//

#include "driver/rcc.h"


uint8_t initRCC(void) {
    //set internal clock source to 16MHz
    //when the MCU is powered on, the initial clock source selected is MSI on 4MHz. We need to check the RCC_CR register to understand if MSI is ready to then set the MSI to 16MHz. When it wakes from standby mode, the MCU instead runs on HSI instead (which is by default 16MHz)
    uint32_t rccState = RCC->cr;

    switch (rccState) {

        case 0x61:                                  //Reset value: 0x0000 0061 (after POR reset)
            while (!MSI_RDY_FLAG) {}                //wait for MSI flag to report ready
            RCC->cr &= ~(0xF << 7);                 //clear MSIs default of 4MHz
            SET_MSI_16;                             //set the MSI to 16MHz
            return 1;                               // return true if MSI was correctly set

        case 0x160:                                 //Reset value: 0x0000 0160 (after wake-up from Standby reset)
            return 2;                               // return 2 if clock is HSI-based

        default:
            RCC->cr = 0x160;
        return 3;                                   //returns 3 if clock had a different configuration than the default, after setting it back to HSI
    }

}



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


    switch (rcc_per) {
        case SYS_CFG:
            // Disable here the RCC register for SYS_CFG
            break;
        case GPIO_A_PER:
            // Disable here the RCC register for GPIO_A_PER
            break;
        case GPIO_B_PER:
            // Disable here the RCC register for GPIO_B_PER
            break;
        case GPIO_C_PER:
            // Disable here the RCC register for GPIO_C_PER
            break;
        case GPIO_D_PER:
            // Disable here the RCC register for GPIO_D_PER
            break;
        case GPIO_E_PER:
            // Disable here the RCC register for GPIO_E_PER
            break;
        case I2C_PER:
            // Disable here the RCC register for I2C_PER
            break;
        case SPI_PER:
            // Disable here the RCC register for SPI_PER
            break;
        case TIM1_PER:
            // Disable here the RCC register for TIM1_PER
            break;
        case EXTI_PER:
            // Disable here the RCC register for EXTI_PER
            break;
        case LCD_PER:
            // Disable here the RCC register for LCD_PER
            break;
        default:
            // Handle unknown value
            break;
    }

}