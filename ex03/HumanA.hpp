/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:28:46 by tndreka           #+#    #+#             */
/*   Updated: 2025/06/23 15:09:56 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
class HumanA
{
private:
	std::string name;
	Weapon& obj;
public:
	HumanA(Weapon& obj, std::string name);
	~HumanA();
	void attack();
};


#endif