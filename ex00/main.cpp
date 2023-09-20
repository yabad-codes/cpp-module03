/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:31:43 by yabad             #+#    #+#             */
/*   Updated: 2023/09/20 09:58:33 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	ClapTrap	tom("Voldemort");
	ClapTrap	harry("harry potter");

	tom.setAttackDamage(5);
	tom.attack(harry.getName());
	harry.takeDamage(5);
	harry.beRepaired(4);
	
	harry.setAttackDamage(7);
	harry.attack(tom.getName());
	tom.takeDamage(7);
	tom.beRepaired(10);
	
	tom = harry;
	return (0);
}