// Template: the compiler writes codes for you based on the rules you give.
// Differnt functions , similar, have only a few different parmaters.
#include <iostream>
#include <string>

template<typename T>// typename = class
void Print(T x) // Only when we call this functions , we created it actually.
{
	std::cout << x << std::endl;
}

template<typename T,int N>
class Array
{
public:
	T m_Array[N];
public:
	T GetSize() const { return N; }
};

int main()
{		
	Print(5); // Template function doesn't really exist until we call it.
	Print<float>(5.5);

	Array<int,4> a;
	Print(a.GetSize());

	std::cin.get();
}
