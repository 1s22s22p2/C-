#include <iostream>
#include <string>   //��Ȼiostream�����Ѿ�������string������string�����˽������������

#define Log(x)	std::cout<<x<<std::endl;

//������һ��ֻ���ַ���ʱʹ�����ã������ַ����ĸ��ƣ���������ʱ��
void PrintString(const std::string& string)  //const��ŵ���ǲ����޸��� 
{
	std::cout << string << std::endl;
}

int main()
{
	//const char* name = "cherno";   //Ҳ����char* name = "cherno"���ǲ����飬����Ҫ�޸�����ַ���
	//Log(name);
	////�ַ�����ָ����ڴ��ַ��ʼ��֪��0������0��askll�д���ո�
	//char name2[6] = { 'c','h','e','r','n','o' };  //û����ֹ��
	//Log(name2);
	//char name3[7] = { 'c','h','e','r','n','o',0 };
	//Log(name3);
	//char name4[7] = { 'c','h','e','r','n','o','\0'};
	//Log(name4);
	//strlen(name);                      //�ַ����ĳ���,ֻʹ����const char����char�ģ���������string
	//strcpy(name3,name2);               //�����ַ�����ֻʹ����const char����char�ģ���������string      

	//c++���滹��std::string
	std::string name = "cherno";/*+"hello";*/       //"cherno"ʵ���Ͼ���const char,������string��,const char��������ӣ�����string����
	/*std::string name = (std::string)"cherno"+"hello";*/
	
	Log(name);
	name.size();
	name += "hello";
	bool contains = name.find("no") != std::string::npos;     //name.find()���������ַ����Ŀ�ʼλ�ã�nops��ʾ�����ڵ�λ��


	std::cin.get();
}