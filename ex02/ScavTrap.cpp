/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:55:32 by yabad             #+#    #+#             */
/*   Updated: 2023/09/20 10:39:34 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called." << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor with name called." << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called." << std::endl;
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap copy assignment operator called." << std::endl;
	if (this != &other) {
		this->Name = other.Name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	if (this->HitPoints && this->EnergyPoints) {
		std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
		return ;
	}
	std::cout << "ScavTrap " << this->Name << " Cannot attack " << target << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode" << std::endl;
}