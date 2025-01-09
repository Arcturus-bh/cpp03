
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap(const char* name);
        ~FragTrap(void);

    void beRepaired(unsigned int amount);
    void takeDamage(unsigned int amount);
    void attack(const std::string& target);
    void highFivesGuys(void);
};

#endif