#include "Menu.h"

char Menu::startPage()
{
	char item_menu;
	bool exit = false;
	while (!exit)
	{
		cout << "1.����\n";
		cout << "2.�����\n";
		cin >> item_menu;
		switch (item_menu)
		{
		case '1': 
		case '2':
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
	cout << "����������� ������������\n";
	cout << "Login: ";
	string tmp_login;
	cin >> tmp_login;
	user.getLogin()->setLogin(tmp_login);
	cout << "Password: ";
	string tmp_password;
	cin >> tmp_password;
	user.getPassword()->setPassword(tmp_password);
	if (user.checkUser(tmp_login))
	{
		cout << "������������ � ����� ������ ��� ����������.\n";
	}
	else
	{
		user.writing(tmp_login);
	}
}

void Menu::registrationAdminPage()
{
	system("cls");
	cout << "����������� ������\n";
	cout << "Login: ";
	string tmp_login;
	cin >> tmp_login;
	admin.getLogin()->setLogin(tmp_login);
	cout << "Password: ";
	string tmp_password;
	cin >> tmp_password;
	admin.getPassword()->setPassword(tmp_password);
	admin.writing();
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

Administrator *Menu::getAdmin()
{
	return &admin;
}
