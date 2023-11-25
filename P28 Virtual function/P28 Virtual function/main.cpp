#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

class Entity
{
public:
	//����virtual����ζ������������麯��
	virtual std::string GetName()            //std::string��Ϊstring�Ƕ�����std�����ռ������
	{
		return "Entity";
	}
};

class Player :public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name):m_Name(name) {}
	std::string GetName() override { return m_Name; }	//override��ʾ���Ǳ���д�ĺ���,���Բ�д������Ϊ�˿ɶ������д��
};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;      //��Entity����ʹ���������ģ����Ƕ���Player�����õ��õ�ȴ��Entity�е�getname
}

int main()
{
	Entity* e = new Entity();
	std::cout << e->GetName() << std::endl;
	PrintName(e);

	Player* p = new Player("Cherno");
	std::cout << p->GetName() << std::endl;
	PrintName(p);

	Entity* entity = p;
	std::cout << entity->GetName() << std::endl;

	std::cin.get();
}
//�����麯�����д��۵ģ�һ����Ҫ���ڴ����洢���һ������ú���ʱ����Ҫ�����������������ʧ