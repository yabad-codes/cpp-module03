/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:50:21 by yabad             #+#    #+#             */
/*   Updated: 2023/09/20 11:01:16 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor called." << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor with name called." << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called." << std::endl;
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called." << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap copy assignment operator called." << std::endl;
	if (this != &other) {
		this->Name = other.Name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return (*this);
}

void	FragTrap::attack(const std::string& target) {
	if (this->HitPoints && this->EnergyPoints) {
		std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
		return ; 
	}
	std::cout << "FragTrap " << this->Name << " cannot attack " << target << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->Name << " requests his birth right of getting a high five." << std::endl;
}