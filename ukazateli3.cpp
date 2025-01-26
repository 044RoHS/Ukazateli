#include <iostream>

int reverse(int* a, int size) 
{
	int i = 0; // First Element of the array
	int b = size - 1; // Last 
		 
	while (i < b ) 
	{
		int temp = a[i];
		a[i] = a[b];
		a[b] = temp;
		i++;
		b--;

	}
	for (int x = 0; x < size;x++) 
	{
		std::cout << a[x] << " ";
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

