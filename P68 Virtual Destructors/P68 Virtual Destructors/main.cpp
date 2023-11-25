#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

class Base
{
public:
	Base() { std::cout << "Base Constructor\n"; }
	virtual ~Base() { std::cout << "Base Destructor\n"; }            
	//���Ϊvirtual��ζ��c++֪��������һ�ַ������ڲ�νṹ�µ�ĳ����д����
	//����ͨ�ĺ���ǰ����Ϊvirtual��ô���ǿ��Ա���д
	//����������������λ�ż���һ���������������ȵ�������������������Ȼ���ڲ�������ϣ����û�����������
};

class Derived:public Base
{
public:
	Derived() { std::cout << "Derived Constructor\n"; }
	~Derived() { std::cout << "Derived Destructor\n"; }
};

int main()
{
	Base* base = new Base();
	delete base;

	std::cout << "-------------------------------\n";
	Derived* derived = new Derived();
	delete derived;

	std::cout << "-------------------------------\n";
	Base* poly = new Derived();
	delete poly;

	std::cin.get();
}

//����������һ����ӵ�����࣬��ô���ǰٷְ�Ҫ������������������麯��