// Dynamic Library: functions are only linked while .exe is running.
// ������/����/����������/ glfw3dll.lib + glfw3.dll �� exe ����ͬһ��Ŀ¼��.
#include <iostream>
#include <GLFW\glfw3.h>

int main()
{
	int a = glfwInit();
	std::cout << a << std::endl;

	std::cin.get();
}