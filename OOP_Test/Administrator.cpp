#include "Administrator.h"

void Administrator::writing()
{
	out.open(path_admin, ios::out);
	if (out.is_open())
	{
		out << "login: " << login.getLogin() << endl;
		out << "password: " << password.getPassword() << endl;
	}
	out.close();
}

bool Administrator::checkAdministrator()
{
	ifstream in(path_admin);
	if (in.good())
	{
		return true;
	}
	return false;
}
