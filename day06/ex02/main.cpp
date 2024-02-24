#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base *generate(void)
{
    int num = std::rand() % 3;

    switch(num)
    {
        case 0:
            std::cout << GREEN "Generating: A" RESET << std::endl;
            return (new A);
        case 1:
            std::cout << GREEN "Generating: B" RESET << std::endl;
            return (new B);
        case 2:
            std::cout << GREEN "Generating: C" RESET << std::endl;
            return (new C);
    }
    return (NULL);
}

void identify(Base *p)
{
    std::cout << "Identified as pointer: ";
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
}

void	identify(Base & p)
{
	std::cout << "Identified as reference: ";
	try
	{
		(void) dynamic_cast<A &>(p);
		std::cout << CYAN "A" RESET;
	}
	catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
	try
	{
		(void) dynamic_cast<B &>(p);
		std::cout << YELLOW "B" RESET;
	}
	catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
	try
	{
		(void) dynamic_cast<C &>(p);
		std::cout << MAGENTA "C" RESET;
	}
	catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
	Base *	p;
	std::srand(std::time(NULL));

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Test [" << i << "]:\t";
		p = generate();
		std::cout << ", ";
		identify(p);
		std::cout << ", ";
		identify(*p);
		delete (p);
		std::cout << std::endl;
	}
	return (0);
}