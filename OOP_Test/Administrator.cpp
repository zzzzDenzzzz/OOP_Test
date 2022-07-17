#include "Administrator.h"

void Administrator::writing(const string &path)
{
	ofstream out;
	out.open(path, ios::out);
	if (out.is_open())
	{
		out << "login: " << login << endl;
		out << "password: " << password << endl;
	}
	out.close();
}

void Administrator::setLogin(string &login)
{
	this->login = login;
}

void Administrator::setPassword(string &password)
{
	this->password = password;
}
