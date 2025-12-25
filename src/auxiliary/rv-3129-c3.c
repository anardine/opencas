//
// Created by Alessandro Nardinelli on 20/12/25.
//


#include "auxiliary/rv-3129-c3.h"

uint8_t readFromRTC(I2C_Handle_t *pToI2CHandle, uint8_t memAddr, uint8_t *data, uint8_t length) {

      //Any serial communication with the RV-3129-C3 starts with a “START condition” and terminates with the “STOP condition” No restart allowed on comms with the RV-3129. The RV-3129-C3 does not allow a repeated START. Therefore a STOP has to be released before the next START.

      uint8_t rtcAddress =  0xAC; // defined at the RTC reference manual

      I2C_Transmit(pToI2CHandle,data,memAddr,length,rtcAddress);
      I2C_Receive(pToI2CHandle, data, length, rtcAddress);


      return 0;
}


uint8_t writeToRTC(I2C_Handle_t *pToI2CHandle, uint8_t memAddr, uint8_t *data, uint8_t length) {

      uint8_t rtcAddress =  0xAC; // defined at the RTC reference manual

      return 0;
}