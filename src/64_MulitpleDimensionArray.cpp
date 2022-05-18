#include <iostream>
#include <string>

int main()
{
	int* array = new int[5]; // A pointer points to int 

	int** array_2d = new int* [5]; // A pointer points to int pointer.
	for (int i = 0; i < 5; i++)
	{
		array_2d[i] = new int[5];
	}
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; i < 5; j++)
		{
			array_2d[i][j] = 1;
		}
	}

	// delete[] array_2d Just release the pointers pointing to 50 arrays.
	for(int i = 0; i < 5 ; i++)
	{
		delete[] array_2d[i];
	}
	delete[] array_2d;


	int* array = new int[5 * 5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; i < 5; j++)
		{
			array[i * 5 + j] = 1;
		}
	}

	std::cin.get();
}