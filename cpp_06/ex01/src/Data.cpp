# include "../include/Data.hpp"

Data::Data(): ptr(0)
{}

Data::Data(void *_ptr): ptr(_ptr)
{}

Data::Data(const Data& other): ptr(other.ptr)
{}

Data& Data::operator=(const Data& other)
{
	if (this != &other)
		ptr = other.ptr;
	return *this;
}

Data::~Data()
{}