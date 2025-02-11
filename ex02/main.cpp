/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 18:26:19 by aldalmas          #+#    #+#             */
/*   Updated: 2025/01/10 09:16:01 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    FragTrap dumby("Dumby");
    ScavTrap stupido("Stupido");
    ClapTrap pizzaiolo("Pizzaiolo");
    
    dumby.attack("a wall");
    stupido.attack("the same wall");
    pizzaiolo.attack("the f****ing same wall");

    std::cout << std::endl;

    dumby.takeDamage(83);
    stupido.takeDamage(83);
    pizzaiolo.takeDamage(83);

    std::cout << std::endl;
    
    dumby.takeDamage(1);
    stupido.takeDamage(1);
    pizzaiolo.takeDamage(1);
    
    std::cout << std::endl;

    dumby.takeDamage(100);
    stupido.takeDamage(100);
    pizzaiolo.takeDamage(100);
    
    std::cout << std::endl;

    dumby.beRepaired(13);
    stupido.beRepaired(13);
    pizzaiolo.beRepaired(13);
    
    std::cout << std::endl;

    dumby.attack("a door");
    stupido.attack("a window");
    pizzaiolo.attack("a fridge");

    std::cout << std::endl;

    dumby.highFivesGuys();
    stupido.guardGate();

    std::cout << std::endl;
    return 0;
}
