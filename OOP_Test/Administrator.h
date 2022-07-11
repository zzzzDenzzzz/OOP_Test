#pragma once

#include<string>

class Administrator
{
	::std::string login;
	::std::string password;
public:
	Administrator();
	::std::string getLogin();
	::std::string getPassword();
	void setLogin(::std::string login);
	void setPassword(::std::string password);
};