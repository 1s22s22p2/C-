#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

class Entity
{
public:
	float x, y;

	/*Entity() = delete;*/       //C++�Դ��˹��캯����������ÿ���delete

	Entity()
	{
		x = 0.0f;
		y = 0.0f;
		std::cout << "Created Entity��" << std::endl;
	}                 //�ڴ���һ��ʵ��ʱ�Զ����У����ֱ�����Entity

	//Entity(float xx,float yy)      //�����ж���������Ǳ������벻ͬ
	//{
	//	x = xx;
	//	y = yy;
	//}

	/*void Init()
	{
		x = 0.0f;
		y = 0.0f;
	}*/

	~Entity()                      //��������������~
	{
		std::cout << "Destroyed Entity��" << std::endl;
	}

	void Print()
	{
		std::cout << x << ',' << y << std::endl;
	}
};

void function()
{
	Entity e;
	e.Print();                   //�����main���涨��e����ô��mainִ�����ʱ�Զ������������������Ǵ�ʱ����̨�Ѿ��رգ�������function�۲���������
	/*e.~Entity();*/
}

int main()
{
	//Entity e;
	//Entity e1(10.0f, 5.0f);
	///*e.Init();*/
	//e.Print();
	//e1.Print();
	function();                  //��ջ�ϵ������ں�������ʱ�Զ����������ڶ��ϵģ�new�ģ�Ҫ�Լ�ɾ����delete��
	std::cin.get();
}