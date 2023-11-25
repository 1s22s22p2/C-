#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

class Entity
{
public:
	float x, y;

	void Move(float xa, float ya)
	{
		x += xa;
		y += ya;
	}

	Entity()
	{
		x = 0.0f, y = 0.0f;
	}                                  //����Ĺ��캯���ڼ̳к�Ҳ���Ե��ã����ǲ��ܳ�ʼ����������еı���
};

//class Palyer
//{
//public:
//	const char* Name;
//	float x, y;
//
//	void Move(float xa, float ya)
//	{
//		x += xa;
//		y += ya;
//	}
//
//	void PrintName()
//	{
//		std::cout << Name << std::endl;
//	}
//};

class Player:public Entity             //Player�����Player��Ҳ��Entity�࣬��ӵ��Entity��һ��public�е�  //�̳ж�����ã�����
{
public:
	const char* Name;
	
	void PrintName()
	{
		std::cout << Name << std::endl;
	}
};                          //������ע�͵�һ������

int main()
{
	Player player;
	std::cout << player.x<< std::endl;
	std::cin.get();
}