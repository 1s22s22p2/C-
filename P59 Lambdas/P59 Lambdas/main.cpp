#include <iostream>
#include <vector>
#include <algorithm>

#define Log(x)	std::cout<<x<<std::endl

void ForEach(const std::vector<int>& values, void(*func)(int))
{
	for (int value : values)
	{
		func(value);
	}
}

int main()
{
	std::vector<int> values = { 1,5,4,2,3 };
	auto lambda = [](int values) {Log("Vlaue:" << values); };  
	auto it=std::find_if(values.begin(), values.end(), [](int value) {return value > 3; });   //��������vector����>3�ĵ�һ����
	std::cout << *it << std::endl;

	//[a,&b]ָaͨ�����ƣ�bͨ�����ô���
	//[this]����ǰ������д���
	//[&]����lambda���������õ��ı��������ô���
	//[=]����lambda���������õ��ı�������Ϊ��������
	//[]ʲô��������                      //[]���������Ǵ�����δ��ݱ���
	ForEach(values, lambda);

	int a = 5;
	auto lambda1 = [a](int values)mutable {a = 5;  Log("Vlaue:" << a); };   //ͨ��ֵ���ݵĻ���Ҫ�޸Ĵ��ݵı���Ҫ����mutable
	auto lambda1 = [&a](int values) {a = 5;  Log("Vlaue:" << a); };

	std::cin.get();
}