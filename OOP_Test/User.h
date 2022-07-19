#pragma once

#include<string>
#include<fstream>
#include"Login.h"
#include"Password.h"

using namespace std;

class User
{
	const string path_user{ "users\\" };
	const string txt{ ".txt" };
protected:
	Login login;
	Password password;
	fstream out;
public:
	void writing(const string &login);
	Login *getLogin();
	Password *getPassword();
	bool checkUser(const string &login);
};