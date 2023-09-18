/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:31:41 by yabad             #+#    #+#             */
/*   Updated: 2023/09/17 15:59:18 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->Name = "Worst";
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap with name constructor called" << std::endl;
	this->Name = name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->Name = other.getName();
	this->HitPoints = other.getHitPoints();
	this->EnergyPoints = other.getEnergyPoints();
	this->AttackDamage = other.getAttackDamage();
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		this->Name = other.getName();
		this->HitPoints = other.getHitPoints();
		this->EnergyPoints = other.getEnergyPoints();
		this->AttackDamage = other.getAttackDamage();
	}
	return (*this);
}


std::string	ClapTrap::getName(void) const {
	return (this->Name);
}

int	ClapTrap::getHitPoints(void) const {
	return (this->HitPoints);
}

int	ClapTrap::getEnergyPoints(void) const {
	return (this->EnergyPoints);
}

int	ClapTrap::getAttackDamage(void) const {
	return (this->AttackDamage);
}

void	ClapTrap::setAttackDamage(int amount) {
	if (amount < 0)
		amount *= -1;
	this->AttackDamage = amount;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->HitPoints && this->EnergyPoints) {
		std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (!this->HitPoints)
		std::cout << this->Name << " is dead!" << std::endl;
	std::cout << "ClapTrap " << this->Name << " is under attack, and lost " << amount << " of HitPoints" << std::endl;
	this->HitPoints -= amount;
	if (this->HitPoints < 0)
		this->HitPoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!this->EnergyPoints)
		return ;
	std::cout << "ClapTrap " << this->Name << " is under construction, and gained " << amount << " of HitPoints" << std::endl;
	this->HitPoints += amount;
	if (this->HitPoints > 100)
		this->HitPoints = 100;
	this->EnergyPoints--;
}

std::ostream&	operator<<(std::ostream& COUT, const ClapTrap& other) {
	COUT << "ClapTrap (" << other.getName() << ")" << std::endl;
	COUT << "   Hit Points    : " << other.getHitPoints() << std::endl;
	COUT << "   Energy Points : " << other.getEnergyPoints() << std::endl;
	COUT << "   Attack Damage : " << other.getAttackDamage() << std::endl;
	COUT << "----------------------" << std::endl;
	return (COUT);
}