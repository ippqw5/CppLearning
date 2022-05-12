// keyword: auto

#include <iostream>
#include <string>
#include <vector>

const char* GetName() 
{ return "QC"; }

int main()
{
	int a = 5;
	auto b = a;
	auto c = 5.5f;
	auto name = GetName();

	std::vector<int> vec({ 1,2,3 });
	for(auto x : vec)
	{
		std::cout << x << std::endl;
	}
	for(auto ite = vec.begin(); ite < vec.end(); ite++)
	{
		std::cout << *ite << std::endl;
	}

	std::cin.get();
}