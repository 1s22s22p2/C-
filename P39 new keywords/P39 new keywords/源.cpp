#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity()
		:m_Name("Unknow") {}
	Entity(const String& name)
		:m_Name(name) {}

	const String& GetName() const
	{
		return m_Name;
	}
};

int main()
{
	int* a=new int;
	int* b = new int(5);
	int* c = new int[50];

	Entity* e0 = new Entity;
	Entity* e2 = new Entity();
	Entity* e1 = new Entity[50];
	Entity* e3 = new(c) Entity();  //new����ӣ�����ʾplace new ��������ڴ��½���ָ�����֣��˴�Ϊb
	/*Entity* e3 = (Entity*)malloc(sizeof(Entity));*/   //ʵ�������

	delete e0;
	delete[] e1;     //�����������new[],��Ҫ��Ӧ����delete[]    
	delete e2;

	std::cin.get();
}