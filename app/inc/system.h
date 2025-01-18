//
// Created by minisforum on 1/17/2025.
//

#ifndef SYSTEM_H
#define SYSTEM_H

#include "common-defines.h"

#define CPU_FREQ      (84000000)
#define SYSTICK_FREQ  (1000)

void system_setup(void);
void system_teardown(void);
uint32_t system_get_ticks(void);
void system_delay(uint32_t milleseconds);

#endif //SYSTEM_H
