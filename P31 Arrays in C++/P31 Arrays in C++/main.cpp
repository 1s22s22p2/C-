#include <iostream>
#include <array>

#define Log(x)	std::cout<<x<<std::endl;

int main()
{
	int example[5];         //��˼�������е���������Ϊ����
	example[0] = 2;         //�����example[0]��ʼ��0��1��2��3��4��û��5
	example[4] = 4;         //������������ڴ��������������ǰ����ݷ�����һ��

	/*example[-1] = 5;
	example[5] = 2;  */      //�ڴ���ʳ�ͻ��memory access violation��

	for (int i = 0; i < 5; i++)
		example[i] = i;         //����������forѭ��һ��ʹ��  

	std::cout << example[0] << std::endl;
	std::cout << example << std::endl;         //ֻ���ӡ�����ĵ�ַ����Ϊ��ʵ���Ǹ�ָ��
	std::cout << *(example + 1) << std::endl;  //��Ҫ����example[1]������example�ĵ�ַ����һ��Ԫ�صĴ�С��4��
	int* ptr = example;
	std::cout << *(ptr + 1) << std::endl;      //ָ���2����˼������Ҫ�������2��Ԫ�أ�ָ������ʵ���������ͼ���ʵ�ʵ��ֽ���
	std::cout << *(int*)((char*)ptr + 1) << std::endl;    //��������һ���ֽ�һ���ֽڵش���������� 
	std::cin.get();

	//������������ַ�ʽ
	int a[5];                      //��ջ�ϴ���һ��������������Զ�����
	int count = sizeof(a) / sizeof(int);           //��������Ԫ����������Ȼ��û�п���������Ƕ�����һ��a[-1]������ֻ�ܼ���ջ�ϵ������С
	int* another = new int[5];     //�ڶ��ϴ�������һֱ��ֱ�����ǰ������ٻ��߳������  
	for (int i = 0; i < 5; i++)
	{
		another[i] = i;
	}
	std::cout << *another << std::endl;        //ʵ�����Ǽ��Ѱַ���������another�ĵ�ַ�õ�����Ȼ�ǵ�ַ��Ȼ���ٷ��������ַ��������
	std::cout << *((int*)*another) << std::endl;      //�����ڴ�֮����Ծ�����ٶ��ϴ���ָ���Ӱ������
	int count = sizeof(another) / sizeof(int);        //�������1,��Ϊ����ָ���СΪ1
	delete[] another;              //�������Ҫ���ص��Ǻ������´��������飬��ô����new�ؼ���

	//ά�������С����ȷ����
	const int Asize = 5;  //���д��static const int size=5����static constexpr int size =5
	int A[Asize];         //A�е�sizeӦ���ǳ���
	for (int i = 0; i < Asize; i++)     //Ȼ�����Ӧ����forѭ��
		A[i] = i;

	//c++��std�����滹��ԭ����array����std::array,���б߽��飬�м�¼���ݴ�С�Ĺ��� ,��Ȼ���ж���Ļ�������ֵ�õ�
	std::array<int, 5> other;   //�����ʹ��Ҫ��ǰ���#include <array>
	for (int i = 0; i < other.size(); i++)     //Ȼ�����Ӧ����forѭ��
		A[i] = i;

	//std::array����ȫ�����ǻ����Ƽ�ԭ�������飬���ж���

}