#include "Menu.h"

char Menu::startPage()
{
	char item_menu;
	bool exit = false;
	while (!exit)
	{
		cout << "1.�����������\n";
		cout << "2.����\n";
		cout << "3.�����\n";
		cin >> item_menu;
		switch (item_menu)
		{
		case '1':
			exit = true;
			break;
		case '2':
			exit = true;
			break;
		case '3':
			exit = true;
			break;
		default:
			cout << "��������� ����!!!\n";
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
	cout << "����������� ������\n";
	cout << "Login: ";
	string tmp_login;
	cin >> tmp_login;
	admin.setLogin(tmp_login);
	cout << "Password: ";
	string tmp_password;
	cin >> tmp_password;
	admin.setPassword(tmp_password);
	admin.writing("admin.txt");
	system("cls");
}

void Menu::signInPage()
{
	system("cls");
	cout << "Login: ";
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
