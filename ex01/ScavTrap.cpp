/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 18:16:30 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/26 14:01:51 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const char* name) : ClapTrap(name)  {
    this->_attack_damage = 20;
    this->_energy_point = 50;
    this->_hit_point = 100;
    std::cout << GREEN "ScavTrap " << this->getName() << " has been created!" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        this->_name = other._name;
        this->_hit_point = other._hit_point;
        this->_energy_point = other._energy_point;
        this->_attack_damage = other._attack_damage;
    }
    return *this; 
}

ScavTrap::~ScavTrap(void) {
    std::cout << RED "ScavTrap " << this->_name << " destructor called" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target) {
        this->getInfos();
    if (this->_energy_point > 0 && this->_hit_point > 0) 
    {
        std::cout << RED << "ScavTrap " << this->_name << " attacks " << target << ", causing " <<  this->_attack_damage << " point(s) of damage." << RESET << std::endl;
        this->_energy_point--;
        return;
    }
    if (this->_energy_point == 0) {
        std::cout << YELLOW << "ScavTrap " << this->_name << " can't attack " << target << "! 0 energy points remaining." << RESET << std::endl;
        return;
    }
    if (this->_hit_point == 0) {
        std::cout << YELLOW << "ScavTrap " << this->_name << " can't attack " << target << " because it needs to be repaired!" << RESET << std::endl;
        return;
    }
}

void ScavTrap::guardGate(void) {
    std::cout << MAGENTA << "ScavTrap " << this->_name << " enter in Gate Keeper mode !"<< RESET << std::endl;
}