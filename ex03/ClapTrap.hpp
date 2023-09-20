/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:31:39 by yabad             #+#    #+#             */
/*   Updated: 2023/09/20 10:16:16 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	protected:
		std::string	Name;
		int			HitPoints;
		int			EnergyPoints;
		int			AttackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string other);
		ClapTrap(const ClapTrap& other);
		~ClapTrap();
		
		ClapTrap&	operator=(const ClapTrap& other);

		std::string	getName(void) const;
		void	setAttackDamage(unsigned int);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

std::ostream&	operator<<(std::ostream& COUT, const ClapTrap& claptrap);

#endif