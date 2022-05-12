// ����ָ��
#include <iostream>
#include <vector>

void HelloWorld(int a)
{
	std::cout << "Hello World! Value: " << a << std::endl;
}

void PrintValue(int value)
{
	std::cout << "Value: " << value << std::endl;
}

void Foreach(const std::vector<int>& vec, void(*func)(int))
{
	for (int value : vec)
		func(value);
}

int main()
{
	void(*Qc)(int); 
	//����ָ�룺����ֵΪvoid �ղ���
	//It seems a lot weird��so we often use auto or typedef another name.
	Qc = &HelloWorld;
	Qc(0);
	
	auto function = HelloWorld; // &HelloWorld ����������ʽת��
	function(0);

	typedef void(*HelloFunction)(int);
	HelloFunction f = HelloWorld;
	f(1);

	// Why we use Function Pointer?
	std::vector<int> vec{ 1,2,3,4,5 };
	Foreach(vec, PrintValue);
	Foreach(vec, &HelloWorld);
	// Lambda �������ڴ���ִ�й����в���������Ͷ�
	Foreach(vec, [](int value) { std::cout << "Lambda Value: " << value << std::endl; });
	// [] : ���񷽷� ��������� parameter ���롣������Ҫ����Ĳ��� �Լ� �����塣	
	std::cin.get();
}