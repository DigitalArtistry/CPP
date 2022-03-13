#include "Sample.class.hpp"

int	main() 
{
	Sample instance;

	intance.foo = 42;
	std::cout << "instance.foo: " << instance.foo << std::endl;

	intance.bar();
	
	return 0;
}
