// 函数指针
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
	//函数指针：返回值为void 空参数
	//It seems a lot weird，so we often use auto or typedef another name.
	Qc = &HelloWorld;
	Qc(0);
	
	auto function = HelloWorld; // &HelloWorld 这里做了隐式转换
	function(0);

	typedef void(*HelloFunction)(int);
	HelloFunction f = HelloWorld;
	f(1);

	// Why we use Function Pointer?
	std::vector<int> vec{ 1,2,3,4,5 };
	Foreach(vec, PrintValue);
	Foreach(vec, &HelloWorld);
	// Lambda 函数，在代码执行过程中产生，用完就丢
	Foreach(vec, [](int value) { std::cout << "Lambda Value: " << value << std::endl; });
	// [] : 捕获方法 ，将外面的 parameter 传入。后面是要传入的参数 以及 函数体。	
	std::cin.get();
}