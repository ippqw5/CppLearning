/* Static Library : Compiled Binary file
 GLFW Library
 Static library means that all functions are put into binary file(.exe)
 C/C++ / ����Ŀ¼��(include) / ....
 ������/����/����������/ glfw3lib
 */
#include <iostream>
#include <GLFW\glfw3.h>

int main()
{
	int a = glfwInit();
	std::cout << a << std::endl;

	std::cout << "Hello,World" << std::endl;
}