#pragma once

#include<iostream>
#include<Windows.h>
#include"Login.h"
#include"Password.h"
#include"Administrator.h"

class Menu
{
	Login login;
	Password password;
	Administrator admin;
public:
	char startPage();
	void registrationPage();
	void registrationAdminPage();
	void signInPage();
	bool checkAdministrator(const string &path);
};