/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:34:29 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/26 15:09:34 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// CONSTRUCTEURS ET DESTRUCTEURS -----------------------------------
FragTrap::FragTrap(const char* name) : ClapTrap(name) {
    this->_hit_point = 100;
    this->_energy_point = 100;
    this->_attack_damage = 30;
    std::cout << GREEN "FragTrap " << this->getName() << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        this->_name = other._name;
        this->_hit_point = other._hit_point;
        this->_energy_point = other._energy_point;
        this->_attack_damage = other._attack_damage;
    }
    return *this; 
}

FragTrap::~FragTrap(void) {
    std::cout << RED "FragTrap " << this->getName() << " destructor called" << RESET << std::endl;
}

// FONCTIONS MEMBRES -----------------------------------
void FragTrap::attack(const std::string& target) {
        this->getInfos();
    if (this->_energy_point > 0 && this->_hit_point > 0) 
    {
        std::cout << RED << "FragTrap " << this->_name << " attacks " << target << ", causing " <<  this->_attack_damage << " point(s) of damage." << RESET << std::endl;
        this->_energy_point--;
        return;
    }
    if (this->_energy_point == 0) {
        std::cout << YELLOW << "FragTrap " << this->_name << " can't attack " << target << "! 0 energy points remaining." << RESET << std::endl;
        return;
    }
    if (this->_hit_point == 0) {
        std::cout << YELLOW << "FragTrap " << this->_name << " can't attack " << target << " because it needs to be repaired!" << RESET << std::endl;
        return;
    }
}

void FragTrap::highFivesGuys(void) {
    std::cout << MAGENTA << "FragTrap " << this->_name << " wants to do a High Five !"<< RESET << std::endl;
}