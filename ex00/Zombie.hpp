/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:43:11 by tndreka           #+#    #+#             */
/*   Updated: 2025/05/26 17:49:34 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(std::string name);
	~Zombie();
	void announce (void);
};

Zombie *newZombie(std::string name);

#endif