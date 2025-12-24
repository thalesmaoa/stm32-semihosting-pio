#include <Arduino.h>
int count = 0;


extern "C" void initialise_monitor_handles(void);

void setup()
{
  initialise_monitor_handles();
  printf("Hello world!\n");
}

void loop() {
  delay(500);
  printf("count = %d\n", count++);
}