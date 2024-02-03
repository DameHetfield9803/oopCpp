#include <iostream>

class foo {
  char name[10];
  int age;

public:
  void getPerson() {
    std::cout << "Hello World";
  }
};

int main() {
  foo f1;
  return 0;
}