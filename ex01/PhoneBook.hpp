//ill now create a header and create the two classes that I have to

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

//colours
# define GREEN "\033[0;32m"
# define RESET "\033[0m"
# define BRIGHT "\033[1m"

//seconds
# define ONE_SECOND 1000000
# define HALF_SECOND 100000

//libraries
# include <unistd.h>
# include <string>
# include <cstdlib>
# include <cctype>
# include <iomanip>
# include <iostream>

class Contact {

	private: 
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	
	public:
		Contact();
		~Contact();
		void	setContact(std::string firstName, std::string lastName,
				  std::string nickName, std::string phoneNumber,
				  std::string darkestSecret);
		void	displayContact() const;
		void	displayPreview(int index) const;
		bool	isValid(const std::string& str);
};

class PhoneBook {

	private:
		Contact	contacts[8]; //an array of contacts
		int		contactCount;
		int		nextIndex;

	public:
		PhoneBook(); //costructor
		~PhoneBook(); //destructor
		void	addContact();
		void	searchContact() const;
		void	startPhonebook();
};

//functions

void	printLoadingBar();

#endif
