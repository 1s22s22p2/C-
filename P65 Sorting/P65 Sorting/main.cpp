#include <iostream>
#include <vector>
#include <algorithm>     //���������std::sort
#include <functional>

#define Log(x)	std::cout<<x<<std::endl;

int main()
{
	std::vector<int> values = { 3,5,1,4,2 };
	std::sort(values.begin(), values.end());  //���ʹ��Ĭ����������

	for (int value : values)
	{
		std::cout << value << std::endl;
	}

	std::sort(values.begin(), values.end(), std::greater<int>());          //Ҳ���Դ��뺯��ָ��
	for (int value : values)
	{
		std::cout << value << std::endl;
	}

	std::sort(values.begin(), values.end(), [](int a, int b) {return a < b; });   //��sort�бȽϺ����᷵��true����flase���Ϊtrue��ôǰһ����������ǰ�棬���Ϊflase��һ����ǰ��


	std::cin.get();
}