#include <iostream>

int main(int argc, char const *argv[]) {
  int *p = nullptr, val = 3;
  std::cout << val << std::endl;
  p = &val;
  *p = 33;
  std::cout << val << std::endl;
  return 0;
}
