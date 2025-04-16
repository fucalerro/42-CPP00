#include "Weapon.hpp"
#include <iostream>

#ifndef HUMANA_H
#define HUMANA_H

class HumanA {
private:
  Weapon &weapon;
  std::string name;

public:
  HumanA(const std::string &name, Weapon &weapon);
  void attack();

  void setWeapon(Weapon &weapon);
  Weapon &getWeapon();

  void setName(std::string &name);
  std::string &getName();

  ~HumanA();
};

#endif
