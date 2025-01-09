/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 18:26:19 by aldalmas          #+#    #+#             */
/*   Updated: 2025/01/09 10:42:52 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    FragTrap dumby("Dumby");
    ScavTrap stupido("Stupido");
    
    dumby.attack("a wall");
    stupido.attack("the same wall");

    std::cout << std::endl;

    dumby.takeDamage(83);
    stupido.takeDamage(83);

    std::cout << std::endl;
    
    dumby.takeDamage(1);
    stupido.takeDamage(1);
    
    std::cout << std::endl;

    dumby.takeDamage(100);
    stupido.takeDamage(100);

    std::cout << std::endl;

    dumby.beRepaired(13);
    stupido.beRepaired(13);
    
    std::cout << std::endl;

    dumby.attack("a door");
    stupido.attack("a window");

    std::cout << std::endl;

    dumby.highFivesGuys();
    stupido.guardGate();

    std::cout << std::endl;
    return 0;
}
