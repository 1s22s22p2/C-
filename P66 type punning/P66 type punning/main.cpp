#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

struct Entity
{
	int x, y;
};

int main()
{
	int a = 50;
	double value = a;
	std::cout << value << std::endl;
	value = *(double*)&a;         //�������������أ���a�ĵ�ַ��ֵdouble�͵�ָ�룬Ȼ���ڷ���
	std::cout << value << std::endl;

	double& b = *(double*)&a;

	Entity e = { 5,8 };
	int* position = (int*)&e;

	std::cout << position[0] << ',' << position[1] << std::endl;      //ͨ�����ַ�ʽ����ת��Ϊ����

	int y = *(int*)((char*)&e + 4);
	std::cout << y << std::endl;

	std::cin.get();
} 