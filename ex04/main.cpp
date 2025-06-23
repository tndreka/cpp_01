/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:52:47 by tndreka           #+#    #+#             */
/*   Updated: 2025/06/23 16:28:02 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //print
#include <string> // string operations
#include <fstream> //read files and writefiles

int main(int ac, char *av[])
{
	(void)av;
	if (ac == 4)
	{
		std::ifstream inputFile("test.txt");
		if(inputFile.is_open())
		{
			std::cout << "test.txt file was opened \n";
		}
		else
			std::cout << "test.txt file was NOT opened \n";
		std::cout << "success ! ! !\n";
	}
	else
		std::cout << "F A I L E D  ! ! !\n";
	return 0;
}