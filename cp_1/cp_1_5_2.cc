#include <iostream>

#include "Sales_item.h"

int main(int argc, char const *argv[]) {
  Sales_item curr_item, input_item;
  int cnt = 0;
  if (std::cin >> curr_item) {
    ++cnt;
    while (std::cin >> input_item) {
      if (input_item.isbn() == curr_item.isbn()) {
        ++cnt;
      } else {
        std::cout << curr_item.isbn() << " " << cnt << std::endl;
        curr_item = input_item;
        cnt = 1;
      }
    }
    std::cout << curr_item.isbn() << " " << cnt << std::endl;
  } else {
    std::cerr << "WTF are you typing!" << std::endl;
    return -1;
  }

  return 0;
}
