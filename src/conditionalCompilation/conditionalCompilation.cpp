#include <iostream>

#define RUN_PRINT_ONE

int main() {
  #ifdef RUN_PRINT_ONE
  std::cout << "This should print, and nothing should come after\n";
  #endif

  #ifdef RUN_PRINT_TWO
  std::cout << "This should not print!\n";
  #endif

  return 0;
}
