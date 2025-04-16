#include "Weapon.hpp"
#include <iostream>

#ifndef HUMANB_H
#define HUMANB_H

class HumanB {
private:
  Weapon *weapon;
  std::string name;

public:
  HumanB(const std::string &name);
  void attack();

  void setWeapon(Weapon &weapon);
  Weapon *getWeapon();

  void setName(std::string &name);
  std::string &getName();

  ~HumanB();
};

#endif
