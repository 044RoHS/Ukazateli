

#include <iostream>


int print(int* arr, int size) 
{
	for (int i = 0; i < size;i++) 
	{
		std::cout <<arr[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}

int main()
{
  
	int array[]{ 1,2,4 };
	int array1[]{ 7,4,5,7,42,54 };
	int array2[]{ 8,101,22,34,67,9999 };
	int sizearray = sizeof(array) / sizeof(int);
	int sizearray1 = sizeof(array1) / sizeof(int);
	int sizearray2 = sizeof(array2) / sizeof(int);
	print(array, sizearray);
	print(array1, sizearray1);
	print(array2, sizearray2);
	
}

