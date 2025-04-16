#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "utils.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>


PhoneBook::PhoneBook() {
  this->contact_count = 0;
  return;
}

PhoneBook::~PhoneBook() { return; }

std::string crop_string(const std::string value) {
  if (value.length() > 10) {
    return value.substr(0, 9) + '.';
  }
  return value;
}

void PhoneBook::search() {
  std::string header[] = {"index", "first name", "last name", "nickname"};

  for (int i = 0; i < 4; i++) {
    std::cout << std::setw(10) << std::right << crop_string(header[i]) << "|";
  }
  std::cout << std::endl;

  for (int i = 0; i < this->contact_count; i++) {
    int index = this->contact[i].get_index();
    std::string first_name = this->contact[i].get_first_name();
    std::string last_name = this->contact[i].get_last_name();
    std::string nickname = this->contact[i].get_nickname();
    std::string darkest_secret = this->contact[i].get_darkest_secret();
    std::cout << std::setw(10) << std::right << index << "|";
    std::cout << std::setw(10) << std::right << crop_string(first_name) << "|";
    std::cout << std::setw(10) << std::right << crop_string(last_name) << "|";
    std::cout << std::setw(10) << std::right << crop_string(nickname) << "|";
    std::cout << std::endl;
  }

  std::string string_index;
  while (1) {
    std::cout << "Enter the index of the contact: ";
    getline(std::cin, string_index);
    if (std::cin.eof()) {
      exit(0);
    }

    if (is_valid_number(string_index))
      break;

    std::cout << "Invalid index." << std::endl;
  }

  int index = std::atoi(string_index.c_str());
  if (index > this->contact_count - 1) {
    std::cout << "No contact at that index." << std::endl;
    return;
  }

  Contact found_contact = this->contact[index];

  std::cout << std::setw(20) << std::left << "First name: " << found_contact.get_first_name() << std::endl;
  std::cout << std::setw(20) << std::left << "Last name: " << found_contact.get_last_name() << std::endl;
  std::cout << std::setw(20) << std::left << "Nickname: " << found_contact.get_nickname() << std::endl;
  std::cout << std::setw(20) << std::left << "Phone number: " << found_contact.get_phone_number() << std::endl;
  std::cout << std::setw(20) << std::left << "Darkest secret: " << found_contact.get_darkest_secret() << std::endl;

  return;
}

std::string prompt(std::string message) {
  while (1) {
    std::cout << std::setw(20) << std::left << message;
    std::string input;
    getline(std::cin, input);
    if (std::cin.eof()) {
      exit(0);
    }

    if (!input.empty())
      return input;
  }
}

void PhoneBook::add() {
  static int position = 0;
  int current = position % 8;

  this->contact[current].set_index(current);

  this->contact[current].set_phone_number(prompt("Enter the phone number: "));
  this->contact[current].set_first_name(prompt("Enter the first name: "));
  this->contact[current].set_last_name(prompt("Enter the last name : "));
  this->contact[current].set_nickname(prompt("Enter the nickname: "));
  this->contact[current].set_darkest_secret(
      prompt("Enter the darkest secret: "));

  if (this->contact_count < 8)
    this->contact_count++;

  position++;

  return;
}
