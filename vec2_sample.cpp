#include <iostream>
#include "vec2.h"

int main(void){
	vec2 a(1, 2), b(2,2);
	
	std::cout << "vecA is: ";
	a.print_coord();
	std::cout << "vecB is: ";
	b.print_coord();
	std::cout << std::endl;
	
	std::cout << "vecA + vecB is: ";
	(a + b).print_coord();
	std::cout << "vecA - vecB is: ";
	(a-b).print_coord();
	std::cout << "vecA / 2 is: ";
	(a/2).print_coord();
	std::cout << "vecB / 2 is: ";
	(b/2).print_coord();
	std::cout << "vecA * 10 is : ";
	(a * 10).print_coord();
	std::cout << "vecB * 10 is: ";
	(b * 10).print_coord();
	std::cout << "(2vecA + vecB/2) * 3 is: ";
	((a*2 + b/2) * 3).print_coord();
	
	bool res = a == b;
	std::cout << "\nvecA == vecB: " << res << std::endl;
	std::cout << "vecA = vecB, new vecA is: ";
	a = b; 
	a.print_coord();
	res = a == b;
	std::cout << "vecA == vecB: " << res << std::endl;

	std::cout << "\nsize of vecA: " << a.magnitude() << std::endl;
	std::cout << "vecC is: ";
	vec2 c(5,5);
	c.print_coord();
	std::cout << "distance between vecA and vecC is: " << a.distance(c) << std::endl;


	return 0;
}
