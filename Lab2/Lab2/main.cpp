#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

int main()
{
	std::string name = "cherno";
	name[2] = 'a';
	std::cout << name << std::endl;     //�����name�½��˸��ڴ��ڴ�������ʱ��cherno��

	//std::string& name1 = "cherno";
	//std::string* name1 = "cherno";     //���ǲ��Ϸ���

	char* name1 = (char*)"cherno";
	/*std::string *name2 = name1;
	std::string &name2 = name1;*/
	std::string name2 = name1;           
	name2[2] = 'a';
	std::cout << name2 << std::endl;
	std::cout << name1 << std::endl;     //����������Ǹ���stringһ����ַ������string��ʵ����ʱ�����һ���ڴ棬�����ڴ洢const char���ڴ��ϣ�����string����ı䣬��name1���䣬��Ϊʵ�ʵĵ�ַ��һ��

	char* name3 = (char*)"cherno";
	const std::string name4 = name1;     
	/*name4[2] = 'a';    */              //����
	std::string name5 = (std::string)name4;
	name5[2] = 'a';
	std::cout << name3 << std::endl;      //cherno
	std::cout << name4 << std::endl;      //cherno
	std::cout << name5 << std::endl;      //charno
	/*char* name7 = (char*)name4;*/

	/*char* name6 = (char*)"cherno";
	name6[2] = 'a';
	std::cout << "name6=" << name6 << std::endl; */    //�޷�������Ϊ�޷��޸�

	std::cin.get();
}