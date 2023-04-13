#include <iostream>

class Zombie{
    private: 
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
};

void Zombie::announce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) {
    this->name = name;
    this->announce();
};

Zombie::~Zombie(){
    std::cout << name << " destroyed" << std::endl;
}

Zombie* newZombie( std::string name ){
    return new Zombie(name);
}

void randomChump( std::string name ){
    Zombie chump = Zombie(name);
}

int main(){
    Zombie("Bad Guy");

    delete newZombie("Bad Guy");
}