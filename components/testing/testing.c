#include "testing.h"
#include <stdio.h>

int
add (int a, int b)
{
  return a + b;
}

Person_t
person_init (void)
{
  Person_t person_init = {
    .name = DEFAULT_NAME,
    .age = DEFAULT_AGE
  };

  return person_init;
}
