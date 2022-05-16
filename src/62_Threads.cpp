#include <iostream>
#include <thread>

static bool s_Finished = false;

void logging()
{
	using namespace std::literals::chrono_literals;

	std::cout << "Started Thread id=" << std::this_thread::get_id() << std::endl;
	while (!s_Finished)
	{
		std::cout << "logging" << std::endl;
		std::this_thread::sleep_for(1s);
	}
}


int main()
{
	std::thread worker(logging); 
	// Create a thread doing whatever work you made it do.And that thread will continue until it done.
	
	std::cin.get();
	s_Finished = true;

	worker.join(); // Only worker has fininshed can cin.get() work.
	std::cout << "Finished." << std::endl;

	std::cout << "Started Thread id=" << std::this_thread::get_id() << std::endl;
	std::cin.get();
}