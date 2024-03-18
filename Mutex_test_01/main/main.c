#include <stdio.h>
#include <stdbool.h>
#include "freertos/FreeRTOS.h"
#include "FreeRTOSConfig.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"

typedef struct _mutex
{
  uint8_t key;
} Mutex_t;

Mutex_t test_mutex = { false };

void
task_1 (void *pvParam)
{
  while (1)
    {
      if (test_mutex.key == true)
        {
          vTaskDelay (pdMS_TO_TICKS (50UL));
        }
      else
        {
          printf ("test 01 is working\r\n");
          vTaskDelay (pdMS_TO_TICKS (100UL));
        }
    }
}

void
task_2 (void *pvParam)
{
  while (1)
    {
      test_mutex.key = true;
      for (int i = 0; i < 100; i++)
        {
          printf ("%d\r\n", i);
        }
      test_mutex.key = false;
      vTaskDelay (pdMS_TO_TICKS (100UL));
    }
}

void
app_main (void)
{
  xTaskCreate (task_1, "task1", 1024 * 2, NULL, 5, NULL);
  xTaskCreate (task_2, "task2", 1024 * 2, NULL, 1, NULL);
}
