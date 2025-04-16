#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int main() {
  PhoneBook PhoneBook;

  while (1) {
    std::string command;
    getline(std::cin, command);

    if (std::cin.eof()) {
      break;
    }

    if (command == "EXIT") {
      break;
    }
    if (command == "ADD") {
      PhoneBook.add();
    }
    if (command == "SEARCH") {
      PhoneBook.search();
    }
  }

  return 0;
}
