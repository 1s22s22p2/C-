#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

int s_Variable = 10;       
//�����static������дextern int s_Varable
//������ⲿ�ļ��еı���,���ֱ��int s_Varable��ᱨ��������
//������int s_Variable���ֻ�˵�Ҳ���s_Variable������
//�������static����ʹʹ��extern int s_VarableҲ�Ҳ���

void Function()            //��Ϊ��һ���ļ���function��static���Բ�����
{

}

int main()
{
	Log(s_Variable);       //���static.cpp�еĵ�s_Variable����static�ͻ����link������Ϊ�ñ����Ѿ���������Ԫ�ж������
	std::cin.get();
}

//static���������ʿ���������ͷ�ļ��������������ǾͰ���class�����private��⣬
//static�������ã����Ա���ܶ���ֵ�bug����Ϊ�����ȫ�ֱ�������ֺܶ����벻���ĵı仯