#include"Menu.h"
#include"Login.h"

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
		m.registrationPage();
		break;
	case '2':
		m.signInPage();
		break;
	case '3':
		exit(0);
	}

	return 0;
}