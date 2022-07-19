#pragma once

#include"User.h"

using namespace std;

class Administrator : public User
{
	const string path_admin{ "admin\\admin.txt" };
public:
	void writing();
	bool checkAdministrator();
};