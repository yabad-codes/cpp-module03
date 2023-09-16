/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:31:43 by yabad             #+#    #+#             */
/*   Updated: 2023/09/16 20:20:15 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	ClapTrap	robot1("Iron Man");
	ClapTrap	robot2("Hulk");

	robot2.setAttackDamage(150);
	robot2.attack(robot1.getName());
	robot1.takeDamage(robot2.getAttackDamage());
	std::cout << robot1;
	std::cout << robot2;
	robot1.beRepaired(5);
	std::cout << robot1;
	std::cout << robot2;
	return (0);
}
