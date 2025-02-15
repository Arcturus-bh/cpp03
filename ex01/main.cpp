/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 18:26:19 by aldalmas          #+#    #+#             */
/*   Updated: 2025/01/09 10:22:27 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    ScavTrap dumby("Dumby");

    dumby.attack("a wall");
    dumby.takeDamage(83);
    dumby.takeDamage(1);
    dumby.takeDamage(100);
    dumby.takeDamage(10);
    dumby.guardGate();
    dumby.beRepaired(13);
    dumby.attack("a door");
    dumby.attack("a window");
    dumby.attack("a water bottle");
    dumby.guardGate();
    return 0;
}
