#pragma once

#include<string>
#include<fstream>
#include"Login.h"
#include"Password.h"

using namespace std;

class Administrator
{
	Login login;
	Password password;

public:
	void writing(const string &path);
	Login getLogin();
	Password getPassword();
};