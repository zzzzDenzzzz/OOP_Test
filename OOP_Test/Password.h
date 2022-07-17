#pragma once

#include<string>

using namespace std;

class Password
{
	string data;
public:
	string getPassword();
	void setPassword(string &data);
};