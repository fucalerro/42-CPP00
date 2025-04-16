#include <iostream>

int main() {

  std::string string = "HI THIS IS BRAIN";
  std::string *stringPTR = &string;
  std::string &stringREF = string;

  std::cout << "str address: " << &string << std::endl;
  std::cout << "ptr address: " << &stringPTR << std::endl;
  std::cout << "ref address: " << &stringREF << std::endl;

  std::cout << std::endl;

  std::cout << "str value: " << string << std::endl;
  std::cout << "ptr value: " << stringPTR << std::endl;
  std::cout << "ref value: " << stringREF << std::endl;

  return 0;
}
