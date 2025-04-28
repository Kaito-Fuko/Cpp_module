# include "../include/Base.hpp"
# include "../include/A.hpp"
# include "../include/B.hpp"
# include "../include/C.hpp"

Base* generate()
{
	Base* res;

	int i = rand() % 3;

	if (i == 0)
	{
		return res = new A();
	}
	else if (i == 1)
	{
		return res = new B();
	}
	else
		return res = new C();
	return (NULL);
}

void identify(Base* p)
{
	A* a = dynamic_cast<A*>(p);
	if (a)
		std::cout << "is A" << std::endl;
	B* b = dynamic_cast<B*>(p);
	if (b)
		std::cout << "is B" << std::endl;
	C* c = dynamic_cast<C*>(p);
	if (c)
			std::cout << "is C" << std::endl;
}

void identify(Base& p)
{
	(void)p;
}

int main()
{
	std::srand(std::time(NULL));
	Base* test = generate();
	identify(test);
}