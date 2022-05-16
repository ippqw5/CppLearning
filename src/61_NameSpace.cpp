#include <iostream>
#include <string>
#include <algorithm>

namespace QC{
	using namespace std;
	void print()
	{
		cout << "qc" << endl;
	}
}

int main()
{
	{
		using namespace QC;
		print();
		cout << "hello" << endl;
	}
	print();
	std::cin.get();
}
