/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 18:26:19 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/26 14:32:26 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    std::cout << "CONSTRUCTORS" << std::endl;
    ClapTrap jb("JB");
    ScavTrap dumby("Dumby");
    
    std::cout << "\nATTACK" << std::endl;
    jb.attack("a fridge");
    dumby.attack("a window");

    std::cout << "\nTAKE DAMAGE" << std::endl;
    jb.takeDamage(5);
    dumby.takeDamage(90);
    
    std::cout << "\nREPAIR" << std::endl;
    jb.beRepaired(13);
    dumby.beRepaired(13);
    
    std::cout << "\nSPECIAL" << std::endl;
    dumby.guardGate();
    
    std::cout << "\nDESTRUCTORS" << std::endl;

    return 0;
}
