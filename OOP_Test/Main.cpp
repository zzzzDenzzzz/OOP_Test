#include"Menu.h"

int main()
{
	SetConsoleOutputCP(1251);

	Menu m;

	if (!m.checkAdministrator("admin.txt"))
	{
		m.registrationAdminPage();
	}
	switch (m.startPage())
	{
	case '1':
		m.signInPage();
		break;
	case '2':
		exit(0);
		break;
	}

	return 0;
}