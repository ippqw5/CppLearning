// Macro: replace text in code with something else
#include <iostream>
#include <string>

#define WAIT std::cin.get()
//��Ҫʹ�������ĺ꣡�����cpp�п���WAIT����Ҫ�ҵ����cpp�еĺ궨�壬���� ���ۣ�

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