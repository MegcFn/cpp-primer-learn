#include <iostream>

void swap(int*, int*);

int main(int argc, char const* argv[]) {
  int val1 = 0, val2 = 0;
  std::cout << "Please give me two numbers:" << std::endl;
  std::cin >> val1 >> val2;
  if (val1 > val2) {
    swap(&val1, &val2);
  }
  while (val1 <= val2) {
    std::cout << val1++ << " " << std::endl;
  }

  return 0;
}

void swap(int* num1, int* num2) {
  *num1 = *num1 ^ *num2;
  *num2 = *num1 ^ *num2;
  *num1 = *num1 ^ *num2;
  return;
}
