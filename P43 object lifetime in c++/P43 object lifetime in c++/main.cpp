#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

class Entity
{
public:
	Entity()
	{
		std::cout << "create entity" << std::endl;
	}
	~Entity()
	{
		std::cout << "destory entity" << std::endl;
	}
};

int* CreateArray()
{
	int array[50];
	return array;
}                   //������һ����ַ�����ǵ�ַ��ָ��Ķ����Ѿ�û����

int* CreateArray1()
{
	int* array=new int[50];
	return array;
}

void CreateArray2(int* arrray)
{
	//fill our array
}                                         //ǧ��Ҫ�ھֲ��������ϴ�������ջ��������߷���һ������ջ�ı�����ָ��

//�������������ʣ��������Ʊ�����ɾ���ڴ���
class ScopedPtr
{
private:
	Entity* m_Ptr;
public:
	ScopedPtr(Entity* ptr)
		: m_Ptr(ptr) {}
	~ScopedPtr()
	{
		delete m_Ptr;            //���������仰����ôֻ�����ǰ�ָ����ռ��int��С�Ŀռ��ɾȥ�ˣ���û��ɾ��ָ����ָ�Ŀռ�
	}
};

int main()
{
	Entity* e1;

	{
		Entity e;
	}

	{
		ScopedPtr e2 = new (Entity);    //������һ����ʽת��     //����scopedptr������ջ�ϴ��죬���Գ���������ʱ�Զ����٣���������������Ȼ����ȥnew�ı���
		Entity* e=new Entity;
		e1 = e;
	}

	delete e1;

	std::cin.get();
}

//���ֿ����Զ����죬�Զ��������뿪��������Զ����ٵ�ջ�����ǳ����ã�����һ����ʱ��������������ڵ�ʱ�䣩