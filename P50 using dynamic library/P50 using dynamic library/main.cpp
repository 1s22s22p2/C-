#include <iostream>
#include <GLFW/glfw3.h>              //��Ҫʹ�ö�̬����ͷ�ļ����ø�

//���Ƕ��ں��������кܶ಻֮ͬ��

#define Log(x)	std::cout<<x<<std::endl;

int main()
{
	int a = glfwInit();
	Log(a);
	std::cin.get();
}