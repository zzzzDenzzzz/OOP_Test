#include "CodeWord.h"

CodeWord::CodeWord()
{
	data = "empty_line";
}

CodeWord::CodeWord(const::std::string &data)
{
	this->data = data;
}

void CodeWord::print()
{
	::std::cout << data << ::std::endl;
}

void CodeWord::writingToFile(const::std::string &path)
{
	::std::ofstream out;
	out.open(path, ::std::ios::out);
	if (out.is_open())
	{
		out << data;
	}
	out.close();
}

void CodeWord::readingFromFile(const::std::string &path)
{
	::std::ifstream in;
	in.open(path, ::std::ios::in);
	if (in.is_open())
	{
		in >> data;
	}
	in.close();
}

void CodeWord::pushBack(const char &c)
{
	data += c;
}

void CodeWord::pushBack(const::std::string &line)
{
	data += line;
}

void CodeWord::popBack()
{
	data.resize(data.size() - 1);
}
