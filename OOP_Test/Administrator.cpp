#include "Administrator.h"

void Administrator::writing(const string &path)
{
	ofstream out;
	out.open(path, ios::out);
	if (out.is_open())
	{
		out << "login: " << login.getLogin() << endl;
		out << "password: " << password.getPassword() << endl;
	}
	out.close();
}

Login Administrator::getLogin()
{
	return login;
}

Password Administrator::getPassword()
{
	return password;
}
