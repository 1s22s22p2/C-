#include <iostream>
#include <string>


//��������
//void Print(int value)
//{
//	std::cout << value << std::endl;
//}
//
//void Print(float value)
//{
//	std::cout << value << std::endl;
//}
//
//void Print(std::string string)
//{
//	std::cout << string << std::endl;
//}

//ģ��
template<typename T>       //tempalte��ʾ���Ǹ�ģ�壬�����ڱ���ʱ��������typename��ģ�������T������           
void Print(T value)
{
	std::cout << value << std::endl;
}                         //�Ⲣ���������ĺ�����ֻ�е�����ʵ�ʵ�����ʱ����Щ�����ű���Ĵ���

//ģ�������������,���Ҳ�ֹ��������ָ������
template<typename T, int N>
class Array
{
private:
	T m_Array[N];   //�����Ϳ�������ͨ��������ʹ�ñ���
public:
	int GetSize() const
	{
		return N;
	}
};


int main()
{
	Print(5);            //����ʵ����ʽ��Print<int>(5);����ʽ�ôӲ����л�ȡ������T��ʲô
	Print("hello");
	Print(5.5f);
	Array<int, 5> array;     //����������һ���汾����N�滻Ϊ5
	std::cout << array.GetSize() << std::endl;

	std::cin.get();
}

//ģ�岻����̫���ӣ���Ϊ̫���ӿɶ��Ի��½�