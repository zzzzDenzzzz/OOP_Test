#include "Password.h"

string Password::getPassword()
{
    return data;
}

void Password::setPassword(string &data)
{
    this->data = data;
}
