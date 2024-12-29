/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 18:16:30 by aldalmas          #+#    #+#             */
/*   Updated: 2024/12/29 20:33:24 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const char* name) {
    this->setName(name);
    this->setHitPoint(100);
    this->setEnergyPoint(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap " << this->getName() << " has been created!" << std::endl;

}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap " << this->getName() << " destructor called" << std::endl;
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
