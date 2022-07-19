#pragma once

#include<iostream>
#include<Windows.h>
#include"Login.h"
#include"Password.h"
#include"Administrator.h"
#include"User.h"

class Menu
{
	Login login;
	Password password;
	Administrator admin;
	User user;
public:
	char startPage();
	void registrationPage();
	void registrationAdminPage();
	void signInPage();
	Administrator *getAdmin();
};