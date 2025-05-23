#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

/* =============================================================================== */
/*									DEFINES	      								   */
/* =============================================================================== */

//colours
# define GREEN "\033[0;32m"
# define RESET "\033[0m"
# define BRIGHT "\033[1m"

//seconds
# define ONE_SECOND 1000000
# define HALF_SECOND 100000

/* =============================================================================== */
/*									LIBRARIES   								   */
/* =============================================================================== */

# include <unistd.h>
# include <string>
# include <cstdlib>
# include <cctype>
# include <iomanip>
# include <iostream>

/* =============================================================================== */
/*									CLASS       								   */
/* =============================================================================== */

//CONTACTS CLASS
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

//PHONEBOOK CLASS
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

#endif
