/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:34:29 by aldalmas          #+#    #+#             */
/*   Updated: 2025/01/09 11:34:31 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const char* name) : ClapTrap(name) {
    std::cout << "FragTrap " << this->getName() << " has been created!" << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap " << this->getName() << " destructor called" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
    this->getInfos();
    if (this->_hit_point == 0)
    {
        std::cout << YELLOW << "FragTrap " << this->_name << " is already down. It needs to be repaired!" << std::endl;
        return;   
    }
    if (amount > this->_hit_point)
        amount = this->_hit_point;
    std::cout << RED << "FragTrap " << this->_name << " just lost " << amount << " hit point(s)!" << RESET << std::endl;
    this->_hit_point -= amount;
}

void FragTrap::beRepaired(unsigned int amount) {
    this->getInfos();
    if (this->_energy_point > 0)
    {
        std::cout << GREEN << "FragTrap " << this->_name << " repaired itself by " << amount << "!" << RESET << std::endl;
        this->_hit_point += amount;
        this->_energy_point--;   
    }
    else
        std::cout << YELLOW << "FragTrap " << this->_name << " can't be repaired. It no longer has energy points!" << RESET << std::endl;
}

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