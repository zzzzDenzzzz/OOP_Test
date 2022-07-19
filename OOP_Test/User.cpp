#include "User.h"

void User::writing(const string &login)
{
	out.open(path_user + login + txt, ios::out);
	if (out.is_open())
	{
		out << "login: " << this->login.getLogin() << endl;
		out << "password: " << password.getPassword() << endl;
	}
	out.close();
}


Login *User::getLogin()
{
	return &login;
}

Password *User::getPassword()
{
	return &password;
}

bool User::checkUser(const string &login)
{
	ifstream in(path_user + login + txt);
	if (in.good())
	{
		return true;
	}
	return false;
}
