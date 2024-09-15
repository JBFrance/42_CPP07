#include "iter.hpp"

int main( void ) 
{
	double array[] = {1, 2, 3, 4, 5};
	iter(array, 5, print_t);
	std::cout << std::endl;
	iter(array, 5, add_t);
	iter(array, 5, print_t);
	std::cout << std::endl;
	std::cout << std::endl;

	char array2[] = {'a', 'b', 'c', 'd'};
	iter(array2, 4, print_t);
	std::cout << std::endl;
	iter(array2, 4, add_t);
	iter(array2, 4, print_t);
	std::cout << std::endl;
	iter(array2, 4, print_t);
	std::cout << std::endl;

	std::string array3[] = {"Hello", "World", "!"};
	iter(array3, 3, print_t);
	std::cout << std::endl;
	return 0;
}