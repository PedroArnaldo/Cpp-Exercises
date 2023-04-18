#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string	_nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
	
	public:
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName()
		std::string getPhoneNumber()
		std::string getDarkestSecret()

		void setFirstName(std::string value);
		void setLastName(std::string value);
		void setNickName(std::string value);
		void setPhoneNumber(std::string value);
		void setDarkestSecret(std::string value);
}

#endif
