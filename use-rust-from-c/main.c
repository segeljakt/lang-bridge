#include <stdio.h>

extern int foo(int x);

int main() {
  printf("foo(0) -> %d\n", foo(0));
}
