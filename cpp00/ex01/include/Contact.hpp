#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	private:
		int			_id;
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;

	public:
		Contact();
		~Contact();

		int			getId(void);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getPhoneNumber(void);
		std::string getDarkestSecret(void);

		void setId(int id);
		void setFirstName(std::string value);
		void setLastName(std::string value);
		void setNickName(std::string value);
		void setPhoneNumber(std::string value);
		void setDarkestSecret(std::string value);
};
#endif
