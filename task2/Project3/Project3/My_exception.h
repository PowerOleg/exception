#pragma once
#include <iostream>
class My_exception : public std::exception
{
public:
	My_exception(const char*  msg);
	~My_exception();
private:
	const char* err;
};

