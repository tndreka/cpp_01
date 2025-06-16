/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:09:19 by tndreka           #+#    #+#             */
/*   Updated: 2025/06/16 18:52:01 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/*
	String ref
	A string reference is an alternative name for an existing string vaiable.
	in the declaration string ref  use the operator &.
	a string reference it refers to the exact same memory location from the string
	that you want to refer.
	Unlike pointers, references dont sotre an address in seperate memory, in our
	case the string ref is the same with the string brain just with a different name.  
*/

int main()
{
	//Main string brain
	std::string brain = "HI THIS IS BRAIN";
	//string pointer to brain
	std::string *ptr = &brain;
	//string refto brain
	std::string &ref = brain;

	//Print Memory adresses
	// 1) STRING
	std::cout<< "Memory address of the main string: " << &brain <<"\n";
	// 2) POINTER
	std::cout<< "Memory address of the string pointer: " << ptr <<"\n";
	// 3) REF
	std::cout<< "Memory address of the string ref: " << &ref <<"\n";
	
	//Print Value
	// 1) STRING
	std::cout<< "The value of the string: " << brain <<"\n";
	// 2) POINTER
	std::cout<< "The value of the pointer: " << *ptr <<"\n";
	// 3) REFERENCE
	std::cout<< "The value of the ref: " << ref <<"\n";
	return 0;
}