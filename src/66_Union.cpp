/*
* Union only has one member(common memory for multiply members). 
* 
*/

#include <iostream>
#include <string>

struct Vector2
{
	float x, y;
};

struct Vector4
{
	union
	{	
		struct
		{
			float x, y, z, w;
		};
		struct
		{
			Vector2 a, b; // a = { x,y }, b = { z,w }
		};
	};
};

void PrintVector2(const Vector2& vec)
{
	std::cout << vec.x << "," << vec.y << std::endl;
}

int main()
{
	struct Union {
		union
		{
			float a;
			int b;
		};
	};
	
	Union u;
	u.a = 2.0f;
	std::cout << u.a << "," << u.b << std::endl;
	// We take the memory of a float explained as a int.

	Vector4 vec = { 1.0f, 2.0f, 3.0f, 4.0f};
	PrintVector2(vec.a);
	PrintVector2(vec.b);

	vec.z = 500.0f;
	PrintVector2(vec.b);

	std::cin.get();
}