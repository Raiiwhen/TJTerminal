#ifndef	_LTC2944_H
#define _LTC2944_H

#include "main.h"
#include "stm32f4xx.h"

#define	battery	200.0f
#define IIC1_SOFT

enum Mode{SLEEP = 0,MANUAL,SCAN,AUTO};

extern float voltage;
extern float current;
extern float quantity;
extern enum Mode current_Mode;

void ltc2944_init(void);
void ltc2944_fixq(void);
float LTC_getV(void);
float LTC_getI(void);
float LTC_getQ(void);
void ltc2944_setq(uint16_t quantity);
void ltc2944_setMode(enum Mode mode);
	
uint8_t ltc_Rd_Reg(uint8_t cnt);
uint8_t ltc_ack(uint8_t addr);
#endif

