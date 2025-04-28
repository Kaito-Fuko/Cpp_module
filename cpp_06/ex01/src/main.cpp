# include "../include/Serializer.hpp"

int main()
{
	Data data("teste");
	std::cout << &data << std::endl;
	uintptr_t addr = Serializer::serialize(&data);
	std::cout << addr << std::endl;
	data = *Serializer::deserialize(addr);
	std::cout << &data << std::endl;
	addr = Serializer::serialize(&data);
	std::cout << addr << std::endl;

}