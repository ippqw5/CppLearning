/* Static Library : Compiled Binary file
 GLFW Library
 Static library means that all functions are put into binary file(.exe)
 C/C++ / 附加目录项(include) / ....
 链接器/输入/附加依赖项/ glfw3lib
 */
#include <iostream>
#include <GLFW\glfw3.h>

int main()
{
	int a = glfwInit();
	std::cout << a << std::endl;

	std::cout << "Hello,World" << std::endl;
}