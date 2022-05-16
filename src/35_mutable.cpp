#include <iostream>
#include <string>
// mutable: something can be changed
// mutable variables can be changed in const object.

class Entity
{
private:
	std::string m_Name;
	mutable int m_DebugCount = 0;
public:
	const std::string& GetName() const
	{
		m_DebugCount++;
		return m_Name;
	}
};


int main()
{
	const Entity e;
	e.GetName();

	int x = 8;
	auto f = [=]() mutable
	{
		x++;
		std::cout << x << std::endl;
	};
	f();
	// x = 8
	// above is equal to the following code
	auto f1 = [=]() 
	{ 
		int y = x;
		y++;
		std::cout << y << std::endl;
	};

	std::cin.get();
}