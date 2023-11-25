#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

struct Entity
{
	static int x, y;          //就像在一个叫做Entity的命名空间里面定义了变量

	void print()              //如果print()是static，x，y也是那么依旧可以运行，但如果s,y不是static那么就无法访问，因为静态方法无法访问非静态变量，因为静态方法无类实例，相当于在类外编写
	{
		std::cout << x << ',' << y << std::endl;
	}
};

int Entity::x;
int Entity::y;       //这两行必须存在否则会报unresolved external symbols

//static void print()                   static 方法的真正样子
//{
//	std::cout << e.x << ',' << e.y << std::endl;
//}

//static void print(Entity e)                   非static 方法的真正样子
//{
//	std::cout << e.x << ',' << e.y << std::endl;
//}

int main()
{
	Entity e;
	e.x = 2;
	e.y = 3;       //这样引用其实是错的，我们要用Entity::x;

	//Entity e1 = { 5,8 };如果不是static那么就可以这么赋值，但是static使x,y不是独属于e1的了
	Entity e1;
	e1.x = 5;
	e1.y = 8;

	e.print();
	e1.print();
	std::cin.get();
}