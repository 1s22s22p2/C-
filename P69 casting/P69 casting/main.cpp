#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

int main()
{
	//c���Եķ�ʽ
	double value = 5.25;
	int a = value;            //������һ����ʽת��
	double b = (int)value + 5.3;
	double c = value + 5.3;
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;
	std::cout << "c=" << c << std::endl;
	//c++�ķ�ʽ
	double s = static_cast<int>(value) + 5.3;        
	//static_cast��̬����ת�������ܻ���һЩ�����ı���ʱ��飬��������ת���Ƿ���Ŀ���
	//reinterpret_cast��˼ʱ������ڴ����½���Ϊ��Ķ���
	//const_const��ӻ��Ƴ�const���������ǲ����Ƴ�const�ĵط�
	//dynamic�����������ת���Ƿ�ɹ�


	std::cin.get();
}