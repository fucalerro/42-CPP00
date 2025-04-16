#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string &name) {
  this->name = name;
  this->weapon = NULL;
  return;
}

HumanB::~HumanB() {
  return;
}

void HumanB::setWeapon(Weapon &weapon) {
  this->weapon = &weapon;
}

Weapon *HumanB::getWeapon() {
  Weapon *weapon = this->weapon;
  return weapon;
}

void HumanB::setName(std::string &name) {
  this->name = name;
}

std::string &HumanB::getName() {
  std::string &name = this->name;
  return name;
}

void HumanB::attack() {
  Weapon *weapon = this->getWeapon();
  std::string name = this->getName();

  if (!weapon) {
    std::cout << name << " is not armed" << std::endl;
    return;
  }

  std::string weaponType = weapon->getType();
  std::cout << name << " attacks with their " << weaponType << std::endl;
}
