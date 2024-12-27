/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 18:29:51 by aldalmas          #+#    #+#             */
/*   Updated: 2024/12/27 22:57:57 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// CONSTRUCTEUR + DESTRUCTEUR -----
ClapTrap::ClapTrap(const char* name) {
        std::cout << "\nDefault constructor called" << std::endl;
   this->setName(name);
   this->setHitPoint(10);
   this->setEnergyPoint(10);
   this->setAttackDamage(0);
}

ClapTrap::~ClapTrap(void) {
    std::cout << "Destructor called" << std::endl;
}


// SETEURS -----
void ClapTrap::setName(const char* name) {
    this->_name = name;
}

void ClapTrap::setHitPoint(unsigned int hit_point) {
    this->_hit_point = hit_point;
}

void ClapTrap::setEnergyPoint(unsigned int energy_point) {
    this->_energy_point = energy_point;
}

void ClapTrap::setAttackDamage(unsigned int attack_damage) {
    this->_attack_damage = attack_damage;
}

// GETEURS -----
std::string ClapTrap::getName(void) {
    return this->_name;
}

unsigned int ClapTrap::getHitPoint(void) {
    return this->_hit_point;
}

unsigned int ClapTrap::getEnergyPoint(void) {
    return this->_energy_point;
}

unsigned int ClapTrap::getAttackDamage(void) {
    return this->_attack_damage;
}

// FONCTIONS MEMBRES -----
void ClapTrap::attack(const std::string& target) {
    this->getInfos();
    if (this->_energy_point > 0 && this->_hit_point > 0) 
    {
        std::cout << RED << "ClapTrap " << this->_name << " attacks " << target << ", causing " <<  this->_attack_damage << " point(s) of damage." << RESET << std::endl;
        this->_energy_point--;
        return;
    }
    if (this->_energy_point == 0) {
        std::cout << YELLOW << "ClapTrap " << this->_name << " can't attack " << target << "! 0 energy points remaining." << RESET << std::endl;
        return;
    }
    if (this->_hit_point == 0) {
        std::cout << YELLOW << "ClapTrap " << this->_name << " can't attack " << target << " because it needs to be repaired!" << RESET << std::endl;
        return;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->getInfos();
    if (this->_hit_point == 0)
    {
        std::cout << YELLOW << "ClapTrap " << this->_name << " is already down. It needs to be repaired!" << std::endl;
        return;   
    }
    if (amount > this->_hit_point)
        amount = this->_hit_point;
    std::cout << RED << "ClapTrap " << this->_name << " just lost " << amount << " hit point(s)!" << RESET << std::endl;
    this->_hit_point -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    this->getInfos();
    if (this->_energy_point > 0)
    {
        std::cout << GREEN << "ClapTrap " << this->_name << " repaired itself by " << amount << "!" << RESET << std::endl;
        this->_hit_point += amount;
        this->_energy_point--;   
    }
    else
        std::cout << YELLOW << "ClapTrap " << this->_name << " can't be repaired. It no longer has energy points!" << RESET << std::endl;
}

void ClapTrap::getInfos(void) {
    if (this->_hit_point == 0 && this->_energy_point == 0)
    {
        std::cout << CYAN << "[HP:" << RED << this->_hit_point << CYAN << " | EP:"<< RED << this->_energy_point << CYAN << "] " << RESET;
        return;
    }
    if (this->_hit_point == 0)
        std::cout << CYAN << "[HP:" << RED << this->_hit_point << CYAN << " | EP:"<< this->_energy_point << "] " << RESET;
    else if (this->_energy_point == 0)
        std::cout << CYAN << "[HP:" << this->_hit_point << " | EP:" << RED << this->_energy_point << CYAN << "] " << RESET;
    else
        std::cout << CYAN << "[HP:" << this->_hit_point << " | EP:"<< this->_energy_point << "] " << RESET;
}