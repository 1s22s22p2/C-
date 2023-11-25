#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

class Entity
{
public:
	////����virtual����ζ������������麯��
	//virtual std::string GetName()            //std::string��Ϊstring�Ƕ�����std�����ռ������
	//{
	//	return "Entity";                     //�ڻ�����麯����ʵ�ʵĺ����壬��ô�������д������д�ɲ�д
	//}                                        //����ʱ�����Ĭ��ʵ��û�����壬ʵ�������ǿ�����ǿ������Ϊ�����ض������ṩ�Լ��Ķ���
	virtual std::string GetName() = 0;       //virtualʹ����Ϊ�麯����0ʹ����ɴ��麯��
};

class Player :public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name) :m_Name(name) {}
	std::string GetName() override { return m_Name; }	//override��ʾ���Ǳ���д�ĺ���,���Բ�д������Ϊ�˿ɶ������д��   //����������붨����Ϊ�������������Ĵ��麯��
};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;      //��Entity����ʹ���������ģ����Ƕ���Player�����õ��õ�ȴ��Entity�е�getname
}

int main()
{
	/*Entity* e = new Entity();            //�����޷�ʵ����һ�����麯��
	std::cout << e->GetName() << std::endl;
	PrintName(e);*/

	Player* p = new Player("Cherno");      //����ֻ��ʵ����һ��ʵ�������д��麯������
	std::cout << p->GetName() << std::endl;
	PrintName(p);

	Entity* entity = p;
	std::cout << entity->GetName() << std::endl;

	std::cin.get();
}