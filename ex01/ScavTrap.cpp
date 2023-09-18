/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:55:32 by yabad             #+#    #+#             */
/*   Updated: 2023/09/18 18:29:41 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->Name = "scav";
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap constructor called" << std::endl;
	this->Name = name;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->Name = other.getName();
	this->HitPoints = other.getHitPoints();
	this->EnergyPoints = other.getEnergyPoints();
	this->AttackDamage = other.getAttackDamage();
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		this->Name = other.getName();
		this->HitPoints = other.getHitPoints();
		this->EnergyPoints = other.getEnergyPoints();
		this->AttackDamage = other.getAttackDamage();
	}
	return (*this);
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap: " << this->getName() << " is now in Gate keeper mode" << std::endl;
}
