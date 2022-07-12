#include "User.h"

::std::string User::getLogin()
{
    return login;
}

::std::string User::getPassword()
{
    return password;
}

void User::setLogin(::std::string login)
{
    this->login = login;
}

void User::setPassword(::std::string password)
{
    this->password = password;
}
