#include "Menu.h"

char Menu::startPage()
{
	char item_menu;
	bool exit = false;
	while (!exit)
	{
		cout << "1.Вход\n";
		cout << "2.Выход\n";
		cin >> item_menu;
		switch (item_menu)
		{
		case '1': case '2':
			exit = true;
			break;
		default:
			cout << "Повторите ввод!!!\n";
			Sleep(500);
			system("cls");
			break;
		}
	}
	return item_menu;
}

void Menu::registrationPage()
{
	system("cls");
	cout << "Login: ";
	string tmp_login;
	cin >> tmp_login;
	login.setLogin(tmp_login);
	cout << "Password: ";
	string tmp_password;
	cin >> tmp_password;
	password.setPassword(tmp_password);
}

void Menu::registrationAdminPage()
{
	system("cls");
	cout << "Регистрация админа\n";
	cout << "Login: ";
	string tmp_login;
	cin >> tmp_login;
	admin.getLogin().setLogin(tmp_login);
	cout << "Password: ";
	string tmp_password;
	cin >> tmp_password;
	admin.getPassword().setPassword(tmp_password);
	admin.writing("admin.txt");
	system("cls");
}

void Menu::signInPage()
{
	system("cls");
	cout << "Login: ";
	string tmp_login;
	cin >> tmp_login;
	login.setLogin(tmp_login);
	cout << "Password: ";
	string tmp_password;
	cin >> tmp_password;
	password.setPassword(tmp_password);
}

bool Menu::checkAdministrator(const string &path)
{
	ifstream out(path);
	if (out.good())
	{
		return true;
	}
	return false;
}
