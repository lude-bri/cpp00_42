//ill now create a header and create the two classes that I have to

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>

class Contact {

	private: 
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	
	public:
		void	setContact();
		void	displayContact() const;
		void	displayPreview(int index) const;
		bool	isEmpty() const;

};

class PhoneBook {

	private:
		Contact	contacts[8];
		int		contactCount;
		int		nextIndex;

	public:
		PhoneBook();
		void	addContact();
		void	searchContact() const;
};

#endif
