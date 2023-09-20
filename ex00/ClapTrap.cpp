/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:31:41 by yabad             #+#    #+#             */
/*   Updated: 2023/09/20 10:03:13 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("Voldemort"), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "Default ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "ClapTrap constructor with name called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "ClapTrap copy constructor called." << std::endl;
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called." << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap copy assignment operator called." << std::endl;
	if (this != &other) {
		this->Name = other.Name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return (*this);
}

std::string	ClapTrap::getName(void) const {
	return (this->Name);
}

void	ClapTrap::setAttackDamage(unsigned int amount) {
	this->AttackDamage = amount;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->HitPoints && this->EnergyPoints) {
		std::cout << *this << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
		return ;
	}
	std::cout << *this << " Cannot attack" << target << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << *this << " took " << amount << " points of damage" << std::endl;
	this->HitPoints -= amount;
	if (this->HitPoints <= 0)
		std::cout << *this << " Destroyed!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->HitPoints && this->EnergyPoints) {
		std::cout << *this << " repaired, +" << amount << " HitPoints!" << std::endl;
		this->EnergyPoints--;
		return ;
	}
	std::cout << *this << " can't be repaired!" << std::endl;
}

std::ostream&	operator<<(std::ostream& COUT, const ClapTrap& claptrap) {
	COUT << "ClapTrap " << claptrap.getName();
	return (COUT);
}