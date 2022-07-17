#include <iostream>

int main(int argc, char const *argv[]) {
  int sum = 0, input_num = 0;
  while (std::cin >> input_num) {
    sum += input_num;
  }

  std::cout << "The sum is: " << sum << std::endl;
  return 0;
}
