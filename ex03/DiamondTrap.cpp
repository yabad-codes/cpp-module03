/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:55:15 by yabad             #+#    #+#             */
/*   Updated: 2023/09/20 12:35:56 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("voldemort_clap_name"), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap default constructor called." << std::endl;
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap constructor with name called." << std::endl;
	this->Name = name;
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other.Name + "_clap_name"), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	this->Name = other.Name;
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap copy assignment operator called." << std::endl;
	if (this != &other) {
		this->Name = other.Name;
		this->HitPoints = FragTrap::HitPoints;
		this->EnergyPoints = ScavTrap::EnergyPoints;
		this->AttackDamage = FragTrap::AttackDamage;
	}
	return (*this);
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name is : " << this->Name << ", ClapTrap name is : " << ClapTrap::Name << std::endl;
}