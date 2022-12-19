#include <cstdlib>
#include <iostream>

int main() {
  long elapsed_second = time(nullptr);
  srand(elapsed_second);
  int number = rand();
  std::cout << number;
  return 0;
}
