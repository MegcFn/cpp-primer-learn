#include <iostream>

#include "Sales_item.h"

int main(int argc, char const *argv[]) {
  Sales_item item, sum;
  while (std::cin >> item) {
    sum += item;
  }

  std::cout << sum << std::endl;
  return 0;
}
