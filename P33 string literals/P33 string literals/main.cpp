#include <iostream>
#include <string>
#include <stdlib.h>

#define Log(x)	std::cout<<x<<std::endl;

int main()
{
	using namespace std::string_literals;

	/*std::string name0 ="cherno"+"hello"*/
	/*std::string name0 = std::string("cherno") + "hello";
	std::string name0 = "cherno"s + "hello";
	std::string name0 = u8"cherno"s + "hello";*/
	const char* example = R"(Line1,line2,line3,line4)";  //R����˼�Ǻ���ת����ţ������ת�У���ֱ�ӽ�line����д������Ҫע��ո�ͱ��Ҳ���������
	const char* example1 = "Line1\n" "line2" "line3" "line4";//û�б�Ҫ����������ո��Ӱ��
	std::cout << example << std::endl;
	std::cout << example1 << std::endl;

	const char* name="Che\0rno";  //"Cherno\0"     "Cherno"�������ʵ�ǵ�ַ������������ַ�����
	std::cout<<strlen(name)<<std::endl;      //3

	/*char* name1 = (char*)"cherno"; */     //���û�У�char*���ᱨ����Ϊ�����޷���һ��const char������һ��char
	                          //���������ַ����������ڴ���ֻ���ģ����Լ�ʹ��release�����гɹ���Ҳ�޷��޸����е�ֵ
	/*name1[2] = 'a';
	std::cout << name1<<std::endl; *///�����Ȼ�ǡ�cherno�������ǡ�charno��
	/*�������ڴ�Ϊֻ����ԭ������ָ��ָ�����const char����, ��const char�����洢��ֻ���ռ��У�
	��ʹ����������루char*������char��"cherno")Ҳ���У�ӦΪ��ʵ��ָ�����Ȼ��const char ���͵�����*/
	
	//���������޸ĵ�������ô�Ͱ����Ͷ���Ϊһ�����������ָ��
	char name2[] = "cherno";  //�����൱���½���һ�����ڴ棬��cherno����������飬�����������char���͵����Կ��Ը���
	name2[2] = 'a';
	std::cout << name2 << std::endl;

	//����������ַ���
	const wchar_t* name3 =L"Cherno";    //2���ֽ� ��win   4���ֽ���linux
	const char16_t* name4 = u"Cherno";  //2���ֽ�
	const char32_t* name5 = U"Cherno";  //4���ֽ�


	std::cin.get();
}