#include <iostream>
#include <chrono>
#include <thread>

struct Timer
{
	std::chrono::time_point<std::chrono::steady_clock> end, start;
	std::chrono::duration<float> duration;
	Timer()
	{
		start = std::chrono::high_resolution_clock::now();
	}
	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;

		float ms = duration.count() * 1000.0f;
		std::cout << ms << " ms " << std::endl;
	}
};

void Function()
{
	Timer t;
	for(int i=0;i<100;i++)
	{
		std::cout << "hello" << std::endl;
	}
}


int main()
{
	//using namespace std::literals::chrono_literals;

	Function();
	



	std::cin.get();
}