#pragma once

#include<string>
#include<iostream>
#include<fstream>

class CodeWord
{
	::std::string data;
public:
	CodeWord();
	CodeWord(const ::std::string &data);
	void print();
	void writingToFile(const ::std::string &path);
	void readingFromFile(const ::std::string &path);
	void pushBack(const char &c);
	void pushBack(const ::std::string &line);
	void popBack();
};