#include <iostream>
#include "Log.h"

int main()
{
    //if
	for (int i = 0; i<5; i++)  //第一次循环先运行前两个，第二次再i++，之后又一次判定
	{
		if (i % 2 == 0)
			continue;
		Log("hello world!");
		std::cout << i << std::endl;
	}
	//int j = 0;
	//for (; j < 5; )  //分开也没有关系
	//{
	//	Log("hello world!");
	//	j++;
	//}
	//bool condition = true;
	//for (int i = 0; condition; i++)  //判定语句也可以改
	//{
	//	Log("hello world!");
	//	if (i >= 5)
	//		condition = false;
	//}
	////if
	////while
	//int i = 0;
	//while (i<5) //如果有确认条件，只不过想要比较用while，如果想遍历数组用for
	//{
	//	i++;
	//}
	//do//先执行再判定
	//{
	//	i++;
	//} while (i < 5);
	std::cin.get();
}
