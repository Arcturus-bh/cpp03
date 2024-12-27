/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 18:26:19 by aldalmas          #+#    #+#             */
/*   Updated: 2024/12/27 22:56:24 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    {
        ClapTrap dumby = ClapTrap("Dumby");

        std::cout << "---Energie test---" << std::endl;
        
        dumby.setAttackDamage(4);
        dumby.attack("a chicken");
        dumby.attack("a cat");
        dumby.attack("your grandma");
        dumby.attack("a car");
        dumby.attack("a sock");
        dumby.attack("a painting");
        dumby.setAttackDamage(8);
        dumby.attack("a water bottle");
        dumby.attack("a cloud");
        dumby.attack("a candle");
        dumby.attack("a tree");
        dumby.attack("a tornado");
        dumby.attack("you");        
    }
    {
        ClapTrap doofy = ClapTrap("Doofy");
        
        std::cout << "---Hit points test---" << std::endl;
        
        doofy.setAttackDamage(10);
        doofy.takeDamage(3);
        doofy.takeDamage(4);
        doofy.takeDamage(1);
        doofy.takeDamage(2);
        doofy.attack("the ground");
        doofy.beRepaired(13);
        doofy.attack("the ground");
    }
    {
        ClapTrap proctologue = ClapTrap("Proctologue");

        std::cout << "---0 HP and 0 EP test---" << std::endl;
        proctologue.setAttackDamage(1);
        proctologue.attack("you");
        proctologue.attack("you");
        proctologue.attack("you");
        proctologue.attack("you");
        proctologue.attack("you");
        proctologue.attack("you");
        proctologue.attack("you");
        proctologue.attack("you");
        proctologue.attack("you");
        proctologue.attack("you");
        proctologue.attack("you");
        proctologue.takeDamage(200);
        proctologue.attack("you");
        proctologue.beRepaired(13);
    }
}
