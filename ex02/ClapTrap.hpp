/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 18:27:06 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/26 16:15:00 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>

# define RED    "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define CYAN    "\x1b[36m"
# define MAGENTA "\x1b[35m"
# define RESET   "\x1b[0m"

class ClapTrap {
    protected:
        std::string     _name;
        unsigned int    _hit_point;
        unsigned int    _energy_point;
        unsigned int    _attack_damage;

    public:
        ClapTrap(const char* name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap(void);

        void            setName(const char* name);
        void            setHitPoint(unsigned int hit_point);
        void            setEnergyPoint(unsigned int energy_point);
        void            setAttackDamage(unsigned int attack_damage);

        std::string     getName(void);
        unsigned int    getHitPoint(void);
        unsigned int    getEnergyPoint(void);
        unsigned int    getAttackDamage(void);

        virtual void    attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        void            getInfos(void);
};

#endif