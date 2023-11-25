#include <iostream>
#include <string>

#define Log(x)	std::cout<<x<<std::endl;

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	/*explicit*/ Entity(const std::string& name)
		:m_Name(name),m_Age(-1) {}
	/*explicit*/ Entity(int age)
		:m_Name("Unknown"), m_Age(age) {}
};

void PrintEntity(const Entity& entity)
{
	//Printint
}

int main()
{
	PrintEntity(22);
	PrintEntity((std::string)"Cherno");

	Entity a("cherno");             //����explicit���ֻ��ͨ�����캯�������������
	Entity b(22);
	Entity c = (std::string)"a";             //"a"�Ǹ�char���鲻��string
	//����ʽת��Ϊstring����ʽ���䣬������
	Entity d = 22;                  //��ʽת������˵��ʽ���캯��
	//һ��ֻ������һ����ʽת��
	std::cin.get();
}

//д�ͼ���װ�ǿ�����explicit�����Է�ֹżȻת���������ϵ������Լ�bug