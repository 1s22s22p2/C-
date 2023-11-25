#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

struct Entity
{
	static int x, y;          //������һ������Entity�������ռ����涨���˱���

	void print()              //���print()��static��x��yҲ����ô���ɿ������У������s,y����static��ô���޷����ʣ���Ϊ��̬�����޷����ʷǾ�̬��������Ϊ��̬��������ʵ�����൱���������д
	{
		std::cout << x << ',' << y << std::endl;
	}
};

int Entity::x;
int Entity::y;       //�����б�����ڷ���ᱨunresolved external symbols

//static void print()                   static ��������������
//{
//	std::cout << e.x << ',' << e.y << std::endl;
//}

//static void print(Entity e)                   ��static ��������������
//{
//	std::cout << e.x << ',' << e.y << std::endl;
//}

int main()
{
	Entity e;
	e.x = 2;
	e.y = 3;       //����������ʵ�Ǵ�ģ�����Ҫ��Entity::x;

	//Entity e1 = { 5,8 };�������static��ô�Ϳ�����ô��ֵ������staticʹx,y���Ƕ�����e1����
	Entity e1;
	e1.x = 5;
	e1.y = 8;

	e.print();
	e1.print();
	std::cin.get();
}