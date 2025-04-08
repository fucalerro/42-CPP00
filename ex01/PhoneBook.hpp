#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook {
private:
  Contact contact[8];
  int contact_count;

public:
  PhoneBook();
  ~PhoneBook();
  void add();
  void search();
};

#endif
