/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 18:26:19 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/26 15:14:47 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    {
        std::cout << "CONSTRUCTORS" << std::endl;
        ClapTrap jb("JB");
        ScavTrap dumby("Dumby");
        FragTrap polo("Polo");
        
        std::cout << "\nATTACK" << std::endl;
        jb.attack("a fridge");
        dumby.attack("a window");
        polo.attack("another object he don't have to attack");

        std::cout << "\nTAKE DAMAGE" << std::endl;
        jb.takeDamage(5);
        dumby.takeDamage(90);
        polo.takeDamage(42);
        
        std::cout << "\nREPAIR" << std::endl;
        jb.beRepaired(13);
        dumby.beRepaired(13);
        polo.beRepaired(20);
        
        std::cout << "\nSPECIAL" << std::endl;
        dumby.guardGate();
        polo.highFivesGuys();
        
        std::cout << "\nDESTRUCTORS" << std::endl;
    }
    {
        std::cout << "\nNEW TESTS" << std::endl;
        ClapTrap pizzaiolo("Pizzaiolo");
        ScavTrap stupido("Stupido");
        FragTrap dumby("Dumby");
        
        pizzaiolo.attack("a wall");
        stupido.attack("the same wall");
        dumby.attack("the f****ing same");

        std::cout << std::endl;

        pizzaiolo.takeDamage(83);
        stupido.takeDamage(83);
        dumby.takeDamage(83);

        std::cout << std::endl;
        
        pizzaiolo.takeDamage(1);
        stupido.takeDamage(1);
        dumby.takeDamage(1);
        
        std::cout << std::endl;

        pizzaiolo.takeDamage(100);
        stupido.takeDamage(100);
        dumby.takeDamage(100);
        
        std::cout << std::endl;

        pizzaiolo.beRepaired(13);
        stupido.beRepaired(13);
        dumby.beRepaired(13);
        
        std::cout << std::endl;

        pizzaiolo.attack("a fridge");
        stupido.attack("a window");
        dumby.attack("a door");

        std::cout << std::endl;
        dumby.highFivesGuys();
        stupido.guardGate();

        std::cout << "\nDESTRUCTORS" << std::endl;
        return 0;
    }
}
