#ifndef __DELAY_H
#define __DELAY_H

#include "user_common.h"
#include "core_cm3.h"

void delay_init(void);
void delay_ms(uint32_t _ms);
void delay_us(uint32_t _us);
void delay_300ns(u16 nns);


#endif /* __DELAY_H */
