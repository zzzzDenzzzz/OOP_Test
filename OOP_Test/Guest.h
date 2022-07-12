#pragma once

#include"User.h"

class Guest : public User
{
	::std::string name;
	::std::string surname;
	::std::string address;
	::std::string phone_number;
public:
	Guest();
	::std::string getName();
	::std::string getSurName();
	::std::string getAddress();
	::std::string getPhoneNumber();
	void setName(::std::string name);
	void setSurname(::std::string surname);
	void setAddress(::std::string address);
	void setPhoneNumber(::std::string phone_number);
};