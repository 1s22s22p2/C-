#include <iostream>
#include <array>

#define Log(x)	std::cout<<x<<std::endl;

template<int N>
void PrintArray(const std::array<int, N>& data)
{
	for (int i = 0; i < data.size(); i++)
	{
		Log(data[i])
	}
}

int main()
{
	int dataold[5];
	dataold[0] = 0;   //老式的系统时这样定义静态数组的
	/*dataold[5] = 1; */   //还是会修改后面的值

	std::array<int,5> data;
	data[0] = 2;
	data[4] = 1;
	/*data[5] = 6;*/  //它会进行边界检查
	//两者的声明方式没有区别
	data.size();          //std::array有函数可以返回数组大小  //返回的不是变量size而是具体数值，所以size并不占用内存,在定义中这只是一个模板参数，在编译时被替换
	PrintArray<data.size()>(data);

	std::cin.get();
}

//array是在栈上创建数据，vector是在堆上创建数据
//它和普通数组想比多了一个调试，以及一些函数，而且没有性能成本