#ifndef __OLED_H
#define __OLED_H

#include "stm32f1xx_hal.h"

#define OLED_I2C_ADDR 0x78

#define OLED_WIDTH 128
#define OLED_HEIGHT 64

void OLED_Init(void);
void OLED_Clear(void);
void OLED_Fill(uint8_t data);
void OLED_Set_Pos(uint8_t x, uint8_t y);
void OLED_Show_Char(uint8_t x, uint8_t y, uint8_t chr);
void OLED_Show_String(uint8_t x, uint8_t y, uint8_t *str);
void OLED_Draw_BMP(uint8_t x, uint8_t y, uint8_t width, uint8_t height, const uint8_t *bitmap);

#endif