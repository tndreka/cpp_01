/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:28:49 by tndreka           #+#    #+#             */
/*   Updated: 2025/06/23 13:09:35 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon& obj, std::string name) : obj(obj), name(name) 
{}

HumanA::~HumanA()
{}

void	HumanA::attack()
{
	std::cout<< name << " attacks with their " << obj.getType() << std::endl;
}