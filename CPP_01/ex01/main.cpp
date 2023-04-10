#include <iostream>
#include "Zombie.hpp"

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
    }
    return horde;
}

int main() {
    int numZombies = 5;
    std::string zombieName = "Horde Zombie";
    Zombie* horde = zombieHorde(numZombies, zombieName);
    for (int i = 0; i < numZombies; i++) {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}
