#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

class Base
{
public:
	Base() { std::cout << "Base Constructor\n"; }
	virtual ~Base() { std::cout << "Base Destructor\n"; }            
	//标记为virtual意味着c++知道可能有一种方法，在层次结构下的某种重写方法
	//在普通的函数前面标记为virtual那么他们可以被覆写
	//在析构函数中则移位着加上一个析构函数，会先调用派生类析构函数，然后在层次中向上，调用基类析构函数
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

//当我们允许一个类拥有子类，那么我们百分百要声明你的析构函数是虚函数