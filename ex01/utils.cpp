#include "utils.hpp"

void fill_blank(std::string value) {
  int length = value.length();
  int blank_to_fill = 10 - length;

  for (int i = 0; i < blank_to_fill; i++)
    std::cout << " ";
}

bool is_valid_number(const std::string &value) {
  if (value.length() == 1 && isdigit(value[0])) {
    int number = value[0] - '0';
    return number >= 0 && number <= 7;
  }
  return false;
}
