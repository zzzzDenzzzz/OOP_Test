#include"Menu.h"

int main()
{
	SetConsoleOutputCP(1251);

	Menu menu;

	if (!menu.getAdmin()->checkAdministrator())
	{
		menu.registrationAdminPage();
	}
	switch (menu.startPage())
	{
	case '1':
		menu.registrationPage();
		break;
	case '2':
		exit(0);
		break;
	}

	return 0;
}