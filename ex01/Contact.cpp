/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 14:15:23 by lude-bri          #+#    #+#             */
/*   Updated: 2025/03/29 14:16:14 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip> 
#include <iostream> 

//Constructor
Contact::Contact(){};

//Destructor
Contact::~Contact(){};

//method setContact
void	Contact::setContact(std::string firstName, std::string lastName,
				  std::string nickName, std::string phoneNumber,
				  std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

//truncate to have "." when name +10
std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

//dislays
void	Contact::displayPreview(int index) const
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << truncate(firstName) << "|";
	std::cout << std::setw(10) << truncate(lastName) << "|";
	std::cout << std::setw(10) << truncate(nickName) << "|";
}

