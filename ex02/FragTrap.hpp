/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:34:35 by aldalmas          #+#    #+#             */
/*   Updated: 2025/01/14 16:45:05 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap(void);
        FragTrap(const char* name);
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap(void);
    void beRepaired(unsigned int amount);
    void takeDamage(unsigned int amount);
    void attack(const std::string& target);
    void highFivesGuys(void);
};

#endif