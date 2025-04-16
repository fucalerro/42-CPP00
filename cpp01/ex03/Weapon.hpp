#include <iostream>

#ifndef WEAPON_H
#define WEAPON_H

class Weapon {
private:
  std::string type;

public:
  void setType(std::string type);
  void setType(void *null);
  const std::string &getType() const;

  Weapon(std::string type);
  ~Weapon();
};

#endif
