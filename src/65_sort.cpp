#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void PrintVector(const std::vector<T>& vec)
{
	for( auto ite = vec.begin(); ite < vec.end(); ite++)
	{
		std::cout << *ite << std::endl;
	}

	/*	
	for( auto x : vec )
	{
		std::cout << x << std::endl;
	}
	*/
}
int main()
{
	std::vector<int> vec = { 5,1,3,2,4 };

	std::sort(vec.begin(), vec.end());
	PrintVector<int>(vec);

	std::sort(vec.begin(), vec.end(), [](int a, int b)
	{ 
		if (a == 2)
			return false;
		if (b == 2)
			return true; // let 2 be the end.

		return a > b;
	});
	PrintVector<int>(vec);
	std::cin.get();
}