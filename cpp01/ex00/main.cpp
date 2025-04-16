#include "Zombie.hpp"
#include <string>

void randomChump(std::string);
Zombie *newZombie(std::string name);

int main() {
  randomChump("randomChump");

  Zombie *zombie = newZombie("allocatedZombie");
  zombie->annonce();
  delete zombie;

  return 0;
}
