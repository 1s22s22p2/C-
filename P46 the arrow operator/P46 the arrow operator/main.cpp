#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

struct Vector3
{
	float x,y,z;
};

class Entity
{
public:
	int x;
public:
	void Print() const
	{
		std::cout << "Hello��" << std::endl;
	}
};

class ScopedPtr
{
private:
	Entity* m_obj;
public:
	ScopedPtr(Entity* entity)
		:m_obj(entity) {}

	~ScopedPtr()
	{
		delete m_obj;
	}

	Entity* GetObject()
	{
		return m_obj;
	}

	Entity* operator->()   //û�в���,��Ϊֻ��������õ��������
	{
		return m_obj;
	}

	const Entity* operator->() const
	{
		return m_obj;
	}

};

int main()
{
	{
		Entity e;
		e.Print();

		Entity* ptr = &e;
		/*ptr.ptinr();*/   //������Ϊptrʵ�����Ǹ�ָ�룬�޷������������
		//Entity& entity = *ptr;
		//entity.Print();     //ֻ��ͨ��������������ӡ,�������д�����Ի���Ϊ����
		(*ptr).Print();
		ptr->Print();        //��һ�����Ի�Ϊ��ͷ
		ptr->x = 2;          //Ҳ���Ե��ñ���
	}
	{
		ScopedPtr entity = new Entity();
		/*entity.GetObject()->Print();*/   //�����Ҫ������entity->Print()��Ҫ���������
		entity->Print();

		const ScopedPtr entity1 = new Entity();
		entity1->Print();
	}

	//����ͨ����ͷ������õ�λ�������Լ��ڴ�Ĳ���
	int offset=(int)&((Vector3*)0)->x;   //0Ҳ���Ի���nullptr
	std::cout << offset << std::endl;

	std::cin.get();
}