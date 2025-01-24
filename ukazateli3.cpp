#include <iostream>

int reverse(int* a, int size) 
{
	for (size ; size > 0 ; size-- ) 
	{
		std:: cout << a[size-1]<< " ";
	}
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Ru");
	int array[]{ 1,3,5,6,8,9,18 };
	int size = sizeof(array) / sizeof(int);
	std::cout << "До функции reverse: ";
	for (int i = 0; i < size; ++i) 
	{
		std ::cout<< array[i]<< " ";
	}
	std::cout << std::endl;
	std::cout << "После функции reverse: ";
	reverse(array, size);
	
	
}

