#pragma once

#include<string>
#include<iostream>

using namespace std;

class Login
{
	string data;
public:
	string getLogin();
	void setLogin(string &data);
};