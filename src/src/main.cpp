#include <Arduino.h>
int count = 0;

#ifndef LED_BUILTIN
  #define LED_BUILTIN PC13
#endif

extern "C" void initialise_monitor_handles(void);

void setup()
{
  // SystemClock_Config();
  initialise_monitor_handles();
  printf("Hello world!\n");
  printf("SystemCoreClock (Var): ");
  printf("Clock: %lu Hz\n", SystemCoreClock);

  // Método 2: Cálculo real baseado nos registradores (A verdade do Hardware)
  printf("HAL Real Freq: ");
  printf("Clock: %lu Hz\n", HAL_RCC_GetSysClockFreq());
}

void loop() {
  delay(500);
  printf("count = %d\n", count++);
}

