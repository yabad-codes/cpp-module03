/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:46:29 by yabad             #+#    #+#             */
/*   Updated: 2023/09/20 12:08:58 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string);
		FragTrap(const FragTrap&);
		~FragTrap();
		
		FragTrap&	operator=(const FragTrap&);
		
		void	attack(const std::string&);
		void	highFivesGuys(void);
};

#endif