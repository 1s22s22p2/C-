#include <iostream>
#include "Log.h"

int main()
{
    //if
	for (int i = 0; i<5; i++)  //��һ��ѭ��������ǰ�������ڶ�����i++��֮����һ���ж�
	{
		if (i % 2 == 0)
			continue;
		Log("hello world!");
		std::cout << i << std::endl;
	}
	//int j = 0;
	//for (; j < 5; )  //�ֿ�Ҳû�й�ϵ
	//{
	//	Log("hello world!");
	//	j++;
	//}
	//bool condition = true;
	//for (int i = 0; condition; i++)  //�ж����Ҳ���Ը�
	//{
	//	Log("hello world!");
	//	if (i >= 5)
	//		condition = false;
	//}
	////if
	////while
	//int i = 0;
	//while (i<5) //�����ȷ��������ֻ������Ҫ�Ƚ���while����������������for
	//{
	//	i++;
	//}
	//do//��ִ�����ж�
	//{
	//	i++;
	//} while (i < 5);
	std::cin.get();
}
