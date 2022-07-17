#include <iostream>

int main(int argc, char const *argv[]) {
  int curr_val = 0, input_val = 0;
  if (std::cin >> curr_val) {
    int cnt = 1;
    while (std::cin >> input_val) {
      if (input_val == curr_val) {
        ++cnt;
      } else {
        std::cout << curr_val << " occurs " << cnt << " times" << std::endl;
        curr_val = input_val;
        cnt = 1;
      }
    }
    std::cout << curr_val << " occurs " << cnt << " times" << std::endl;
  }
  return 0;
}
