/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:52:47 by tndreka           #+#    #+#             */
/*   Updated: 2025/06/23 16:14:02 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *av[])
{
	(void)av;
	if (ac == 4)
	{
		std::cout << "success ! ! !\n";
	}
	else
		std::cout << "F A I L E D  ! ! !\n";
	return 0;
}