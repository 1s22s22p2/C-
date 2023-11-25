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
}                   //返回了一个地址，但是地址所指向的东西已经没有了

int* CreateArray1()
{
	int* array=new int[50];
	return array;
}

void CreateArray2(int* arrray)
{
	//fill our array
}                                         //千万不要在局部作用域上创建基于栈的数组或者返回一个基于栈的变量的指针

//如何利用这个特质：自主控制变量的删除于创建
class ScopedPtr
{
private:
	Entity* m_Ptr;
public:
	ScopedPtr(Entity* ptr)
		: m_Ptr(ptr) {}
	~ScopedPtr()
	{
		delete m_Ptr;            //如果不加这句话，那么只不过是把指针所占的int大小的空间给删去了，并没有删除指针所指的空间
	}
};

int main()
{
	Entity* e1;

	{
		Entity e;
	}

	{
		ScopedPtr e2 = new (Entity);    //这里有一个隐式转换     //由于scopedptr变量在栈上创造，所以超出作用域时自动销毁，调用析构函数，然后上去new的变量
		Entity* e=new Entity;
		e1 = e;
	}

	delete e1;

	std::cin.get();
}

//这种可以自动构造，自动析构，离开作用域后自动销毁的栈变量非常有用，比如一个计时器（计算变量存在的时间）