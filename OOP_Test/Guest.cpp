#include "Guest.h"

Guest::Guest()
{
	name = "empty_line_name";
	surname = "empty_line_surname";
	address = "empty_line_address";
	phone_number = "empty_line_phone_number";
}

::std::string Guest::getName()
{
	return name;
}

::std::string Guest::getSurName()
{
	return surname;
}

::std::string Guest::getAddress()
{
	return address;
}

::std::string Guest::getPhoneNumber()
{
	return phone_number;
}

void Guest::setName(::std::string name)
{
	this->name = name;
}

void Guest::setSurname(::std::string surname)
{
	this->surname = surname;
}

void Guest::setAddress(::std::string address)
{
	this->address = address;
}

void Guest::setPhoneNumber(::std::string phone_number)
{
	this->phone_number = phone_number;
}
