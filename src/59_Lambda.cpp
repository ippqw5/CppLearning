// Once you have a function pointer, you can use lambda.
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
void Foreach(const std::vector<int>& vec, void(*func)(int))
{
	for (int value : vec)
		func(value);
}
void Foreach1(const std::vector<int>& vec, const std::function<void(int)>& func)
{
	for (int value : vec)
		func(value);
}


int main()
{	
	std::vector<int> vec{ 1,2,3,4,5 };

	auto ite = std::find_if(vec.begin(), vec.end(), [](int value) { return value < 3; });
	std::cout << *ite << std::endl;

	int a = 9;

	auto lambda = [](int value) { std::cout << "Lambda Value: " << value << std::endl; }; // �ǲ���lambda������ʽת����ָ��
	auto lambda1 = [&a](int value) { std::cout << "Lambda Value: " << a << std::endl; };
	/*
	* [] capture
	* [=] : ����ֵ ���б���, [&] : ���� ���б��������� , [a]: ֵ���� a.
	* 
	*/
	Foreach(vec, lambda);
	Foreach1(vec, lambda1);
	std::cin.get();
}