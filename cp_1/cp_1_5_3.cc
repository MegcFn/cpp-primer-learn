#include <iostream>

#include "Sales_item.h"

int main(int argc, char const *argv[]) {
  Sales_item total;
  if (std::cin >> total) {
    Sales_item trans;
    while (std::cin >> trans) {
      if (total.isbn() == trans.isbn())
        total += trans;
      else {
        std::cout << total << std::endl;
        total = trans;
      }
    }
    std::cout << total << std::endl;
  } else {
    std::cerr << "WTF are you typing?" << std::endl;
    return -1;
  }
  return 0;
}