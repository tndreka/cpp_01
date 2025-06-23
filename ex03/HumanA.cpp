/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:28:49 by tndreka           #+#    #+#             */
/*   Updated: 2025/06/23 15:21:37 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& obj) :  name(name), obj(obj)
{}

HumanA::~HumanA()
{}

void	HumanA::attack()
{
	std::cout<< name << " attacks with their " << obj.getType() << std::endl;
}