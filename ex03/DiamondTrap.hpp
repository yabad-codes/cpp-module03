/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:13:23 by yabad             #+#    #+#             */
/*   Updated: 2023/09/20 12:39:37 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	Name;
	public:
		DiamondTrap();
		DiamondTrap(std::string);
		DiamondTrap(const DiamondTrap&);
		~DiamondTrap();
		
		DiamondTrap&	operator=(const DiamondTrap&);
		
		void	attack(const std::string&);
		void	whoAmI();
};

#endif