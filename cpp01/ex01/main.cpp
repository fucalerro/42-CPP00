#include "Zombie.hpp"
#include <string>

Zombie *zombieHorde(int N, std::string name);

int main() {

  int N = 5;

  Zombie *horde = zombieHorde(N, "horde");

  for (int i = 0; i < N; i++) {
    horde[i].annonce();
  };

  delete[] horde;

  return 0;
}
