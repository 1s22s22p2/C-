#include <iostream>

#define Log(x)	std::cout<<x<<std::endl

using namespace std;

namespace apple
{
	void print(const::string text)
	{
		Log(text);
	}
}

namespace orange
{
	void print(const char* text)
	{
		std::string temp = text;
		std::reverse(temp.begin(), temp.end());    //��temp������
		Log(temp);
	}
}

using namespace apple;
using namespace orange;


int main()
{
	print("cherno");        //chernoʵ������const char���Ի����orange�еĺ���  //�ⲻ�Ǳ������������������У���������Ҫ�޸��������Է���

	std::cin.get();
}

//ǧ��Ҫ��ͷ�ļ���ʹ�������ռ䣬�������������������ʲô����֪��
//���ֻ���ں�����ʹ�û����ԣ���Ϊ�����������Ͳ�ʹ����������ռ���