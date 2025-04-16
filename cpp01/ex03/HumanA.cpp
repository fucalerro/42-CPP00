#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
    : weapon(weapon), name(name) {
}

HumanA::~HumanA() {
  return;
}

void HumanA::setWeapon(Weapon &weapon) {
  this->weapon = weapon;
}

Weapon &HumanA::getWeapon() {
  Weapon &weapon = this->weapon;
  return weapon;
}

void HumanA::setName(std::string &name) {
  this->name = name;
}

std::string &HumanA::getName() {
  std::string &name = this->name;
  return name;
}

void HumanA::attack() {
  Weapon weapon = this->getWeapon();
  std::string name = this->getName();

  std::string weaponType = weapon.getType();

  std::cout << name << " attacks with their " << weaponType << std::endl;
}
