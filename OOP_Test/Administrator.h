#pragma once

#include<string>
#include<fstream>

using namespace std;

class Administrator
{
	string login;
	string password;
public:
	void writing(const string &path);
	void setLogin(string &login);
	void setPassword(string &password);
};