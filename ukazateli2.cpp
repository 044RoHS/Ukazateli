#include <iostream>


int swap(int* a ,int* b) 
{
	int value1 = *a;
	*a = *b;
	*b = value1;
	return 0;


}

int main()
{
	int a = 5, b = 8;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(&a, &b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	return 0;
}


