#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

void PrintEntity(Entity* e);
void PrintEntity(const Entity& e);

class Entity
{
public:
	int x, y;

	/*Entity(int x, int y)
		:x(x), y(y) {}*/
	Entity(int x, int y)
	{
		/*Entity* e = this;
		e->x = x, e->y = y;*/
		/*this->x = x, this->y = y;*/
		(*this).x = x, (*this).y = y;

		PrintEntity(this);    //��������������⺯��ʱ�����������
		PrintEntity(*this);    //������
		delete this;         //this�������÷�
	} //this�ڷ�const��������Entity*����const��������const Entity*

};

void PrintEntity(Entity* e)
{
	//print something
}

void PrintEntity(const Entity& e)
{
	//print something
}

int main()
{

	std::cin.get();
}