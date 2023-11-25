#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

class example
{
public:
	example()
	{
		std::cout << "you create a example!" << std::endl;
	}
	example(int x)
	{
		std::cout << "you create a example as " << x << std::endl;
	}
};

class Entity
{
private:
	std::string m_Name;
	int m_Score;
	example m_example;
public:
	//Entity()
	//{
	//	m_Name = "Unknown";   //������m_Nameʵ���ϱ����������Ρ������˷ѣ����Ƕ����������ֻ������ͣ������ַ��������ࣩ�����ᱻ��ʼ����֪����ʽ��ֵ�Ż��ʼ������
	//	m_example=example(8);
	//}
	//Entity(const std::string& name)     //���½�����ʱ������һ�Σ��ڸ�ֵʱ����һ��
	//{
	//	m_Name = name;
	//}
	const std::string& GetName() const { return m_Name; }
	/*�������������������������*/
	Entity()
		:m_Name("unknown"), m_Score(0),m_example(example(8))   //����ֻ������½�ʱ��ֵ��
	{
	}
	Entity(const std::string& name)
		:m_Name(name),m_Score(0)       //Ҫ��������Ա�б���ͬ��˳��д�������������������
	{
	}
};

int main()
{
	Entity e;
	std::cout << e.GetName() << std::endl;
	Entity e1("Cherno");
	std::cout << e1.GetName() << std::endl;

	std::cin.get();
	
}