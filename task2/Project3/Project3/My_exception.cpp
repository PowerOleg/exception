#include "My_exception.h"

My_exception::My_exception(const char* msg) : std::exception(msg)
{
	this->err = msg;
}
My_exception::~My_exception()
{
	delete[] err;
}
