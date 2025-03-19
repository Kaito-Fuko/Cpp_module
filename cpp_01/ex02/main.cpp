#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPtr = &string;
	std::string &stringRef = string;

	std::cout << "memory address of string: " << &string << std::endl;
	std::cout << "memory address of stringPtr: " << &stringPtr << std::endl;
	std::cout << "memory address of stringRef: " << &stringRef << std::endl << std::endl;

	std::cout << "value of string: " << string << std::endl;
	std::cout << "value of stringPtr: " << *stringPtr << std::endl;
	std::cout << "value of stringRef: " << stringRef << std::endl;
	
	return 0;
}