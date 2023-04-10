#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include "Weapon.hpp"

class HumanA {
public:
    HumanA(const std::string &name, const Weapon &weapon);
    void attack() const;

private:
    std::string name;
    const Weapon &weapon;
};

#endif
