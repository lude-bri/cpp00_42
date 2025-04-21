/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 11:43:17 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/21 12:08:20 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//Constructor
PhoneBook::PhoneBook()
{
	this->contactCount = 0;
	this->nextIndex = 1;
}

//Destructor
PhoneBook::~PhoneBook(){}

void	PhoneBook::addContact(void)
{
	std::cout << "LET'S ADD A CONTACT!" << std::endl;
	usleep(1000000);
	std::string green = "\033[0;32m";
	std::string reset = "\033[0m";
	std::string bright = "\033[1m";

	std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

	std::cout << green << bright;
	std::cout << "Please type the contact's first name: \n";
	std::getline(std::cin , firstName);
	std::cout << "Please type the contact's last name: \n";
	std::getline(std::cin , lastName);
	std::cout << "Please type the contact's nick name: \n";
	std::getline(std::cin , nickName);
	std::cout << "Please type the contact's phone number: \n";
	std::getline(std::cin , phoneNumber);
	std::cout << "Please type the contact's darkest secrets: \n";
	std::getline(std::cin , darkestSecret);

	if (firstName.size() < 1 || lastName.size() < 1 || nickName.size() < 1
		|| phoneNumber.size() < 1 || darkestSecret.size() < 1)
		std::cout << "A contact cannot have empty fields" << std::endl;
	else
	{
		Contact &c = this->contacts[this->contactCount++ % 8];
		c.setContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
		std::cout << std::endl << "Contacts Added Successfully!!!\n";
	}
}

void	PhoneBook::searchContact(void) const
{
	std::cout << "LET'S SEARCH FOR A CONTACT!" << std::endl;
	usleep(1000000);
	std::string green = "\033[0;32m";
	std::string reset = "\033[0m";
	std::string bright = "\033[1m";
	Contact	c;

	if (this->contactCount == 0)
	{
		std::cout << "No contacts yet, mah boi. Go out and make some friends!" << std::endl;
		return ;
	}

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;

	for (int i = 0; i < std::min(this->contactCount, 8); i++)
		this->contacts[i].displayPreview(i);

	std::cout << "Choose an index to view the full contact: ";
	std::string input;
	std::getline(std::cin, input);

	if (!c.isValid(input))
	{
		std::cout << "Invalid input. Please enter a valid index\n";
		return ;
	}
	
	int	index = atoi(input.c_str());
	if (index < 0 || index >= std::min(this->contactCount, 8))
		std::cout << "Invalid index" << std::endl;
	else
		this->contacts[index].displayContact();
}
