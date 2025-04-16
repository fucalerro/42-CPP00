#include <string>

#ifndef ZOMBIE_H
#define ZOMBIE_H
class Zombie {
public:
  Zombie();
  ~Zombie();

  void setName(std::string &name);
  void annonce();

private:
  std::string name;
};

#endif
