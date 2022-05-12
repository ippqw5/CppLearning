// Dynamic Library: functions are only linked while .exe is running.
// 链接器/输入/附加依赖项/ glfw3dll.lib + glfw3.dll 跟 exe 放在同一个目录下.
#include <iostream>
#include <GLFW\glfw3.h>

int main()
{
	int a = glfwInit();
	std::cout << a << std::endl;

	std::cin.get();
}