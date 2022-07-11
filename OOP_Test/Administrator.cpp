#include "Administrator.h"

Administrator::Administrator()
{
	login = "empty_string_login";
	password = "empty_string_password";
}

::std::string Administrator::getLogin()
{
	return login;
}

::std::string Administrator::getPassword()
{
	return password;
}

void Administrator::setLogin(::std::string login)
{
	this->login = login;
}

void Administrator::setPassword(::std::string password)
{
	this->password = password;
}
