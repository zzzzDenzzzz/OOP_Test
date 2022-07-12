#pragma once

#include<string>

class User
{
protected:
	::std::string login;
	::std::string password;
public:
	::std::string getLogin();
	::std::string getPassword();
	void setLogin(::std::string login);
	void setPassword(::std::string password);
};