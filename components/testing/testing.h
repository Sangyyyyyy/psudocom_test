#ifndef __TESTING_H__
#define __TESTING_H__

#include <stdio.h>

/**
 * test용 헤더파일입니다.
 * test하기위해 한겁니다.
 * 그렇습니다.
 * 왜 include할때 ../testing/testing.h 라고 해야하는지 모르겠습니다
 * 경로는 맞는데
 * 다른애들은 왜..?
*/

#define DEFAULT_AGE 20
#define DEFAULT_NAME "HONG GIL DONG"

typedef struct _person
{
  char *name;
  unsigned char age;
} Person_t;

int add (int a, int b);
Person_t person_init (void);

#endif
