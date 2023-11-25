#include <iostream>
#include <vector>

#define Log(x)	std::cout<<x<<std::endl

void HelloWorld(int a)
{
	Log("Hello World value:"<<a);
}

void PrintValue(int value)
{
	Log(value);
}

void ForEach(const std::vector<int>& values,void(*function)(int))   //���ƶ�value��ʲô����
{
	for (int value : values)
	{
		function(value);
	}
}

int main()
{
	{
		/*auto function = HelloWorld();*/   //����Ⱥ��ұ��ǵ��ú�������auto�޷��ж���ʲô����
		auto function = HelloWorld;         //���������ڻ�ȡ����ָ�룬�ȼ�auto function = &HelloWorld; 
		/*void(*function)(); */            //auto��ʵ��������void��*������
		//&HelloWorld���ڿ�ִ���ļ����ҵ�hello world�������õ����cpuָ����ڴ��ַ
		//����&Ҳ��������ʽת��
		function(1);
		function(2);

		void(*cherno)(int) = HelloWorld;
		cherno(3);
		cherno(4);

		typedef void(*HelloWorldFunction)(int);   //ע����2������
		HelloWorldFunction zzz = HelloWorld;
		zzz(5);
	}

	std::vector<int> vector = {1,5,4,2,3};
	ForEach(vector,PrintValue);
	ForEach(vector, [](int value) {Log("Value:" << value); });

	std::cin.get();
}