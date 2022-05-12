#include <iostream>
#include <array>

// std::array. You set the size , fixed, when you declare it .
template<int N,typename T>
void PrintArray(const std::array<T, N>& array)
{
	for(int i=0; i<N; i++)
	{
		std::cout << array[i] << std::endl;
	}
}
int main()
{
	std::array<int, 5> data{1,2,3,4,5};
	PrintArray<data.size(),int>(data);
	std::cin.get();
}