#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

class Singleton
{
//private:
//	static Singleton* s_Instance;
public:
	static Singleton& Get() 
	{
		static Singleton s_Instance;//�����汻ע�Ͳ���һ��Ч���������ʹ��static����ô��}instance�ͻᱻ���٣���ô������&���þͲ�����
		return s_Instance; 
	}
	void Hello() {}
};

//Singleton* Singleton::s_Instance = nullptr;

//int i = 0;  ȫ�ֱ���

void Function()
{
	static int i = 0;
	i++;                           //ÿ����һ�κ�����i+1
	Log(i);
}

int main()
{
	Function();
	//i=10   ��ȫ�ֱ�����Ӱ�쵫�Ƕ�Local static������Ӱ��
	Function();
	Function();
	Singleton::Get().Hello();
	std::cin.get();
}