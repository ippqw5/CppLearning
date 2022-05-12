// Macro: replace text in code with something else
#include <iostream>
#include <string>

#define WAIT std::cin.get()
//不要使用这样的宏！如果在cpp中看到WAIT，还要找到这个cpp中的宏定义，发现 九折？

#if 1

#if QC_DEBUG == 1
#define Log(x) std::cout << x << std::endl
#elif defined(QC_RELEASE)
#define Log(x)
#endif

#endif

#define rep(x) for (int i=0; i<x;i++) \
{\
	Log(i);\
}

int main()
{
	Log("Hello"); // std::cout << x << std::endl
	rep(5);
	WAIT;
}