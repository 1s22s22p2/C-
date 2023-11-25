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
	dataold[0] = 0;   //��ʽ��ϵͳʱ�������徲̬�����
	/*dataold[5] = 1; */   //���ǻ��޸ĺ����ֵ

	std::array<int,5> data;
	data[0] = 2;
	data[4] = 1;
	/*data[5] = 6;*/  //������б߽���
	//���ߵ�������ʽû������
	data.size();          //std::array�к������Է��������С  //���صĲ��Ǳ���size���Ǿ�����ֵ������size����ռ���ڴ�,�ڶ�������ֻ��һ��ģ��������ڱ���ʱ���滻
	PrintArray<data.size()>(data);

	std::cin.get();
}

//array����ջ�ϴ������ݣ�vector���ڶ��ϴ�������
//������ͨ������ȶ���һ�����ԣ��Լ�һЩ����������û�����ܳɱ�