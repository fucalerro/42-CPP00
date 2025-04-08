#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstdlib>
#include <iostream>

// setters
void Contact::set_index(const int &index) { this->index = index; }

void Contact::set_first_name(const std::string &value) {
  this->first_name = value;
}

void Contact::set_last_name(const std::string &value) {
  this->last_name = value;
}

void Contact::set_nickname(const std::string &value) { this->nickname = value; }

void Contact::set_phone_number(const std::string &value) {
  this->phone_number = value;
}

void Contact::set_darkest_secret(const std::string &value) {
  this->darkest_secret = value;
}

// getters
int Contact::get_index() const { return this->index; }
std::string Contact::get_first_name() const { return this->first_name; }
std::string Contact::get_last_name() const { return this->last_name; }
std::string Contact::get_nickname() const { return this->nickname; }
std::string Contact::get_phone_number() const { return this->phone_number; }
std::string Contact::get_darkest_secret() const { return this->darkest_secret; }

// constructor & destructor
Contact::Contact() { return; }
Contact::~Contact() { return; }
