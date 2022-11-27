#include <stdio.h>

int main(void) {
  int a = 0;
  do {
    if (a % 3)
      a += 4;
    else
      a += 5;
  } while (a <= 187612);

  printf("%d", a)

  return 0;
}