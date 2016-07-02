#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>

#define MOTOR1 1
#define MOTOR2 2

void motorInit();
void motorWrite(uint8_t no, int32_t speed);
void motorFree(uint8_t no);
void motorStop(uint8_t no);

#endif
