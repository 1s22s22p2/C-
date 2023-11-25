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
	const char* example = R"(Line1,line2,line3,line4)";  //R的意思是忽视转义符号，如果想转行，就直接将line分行写，但是要注意空格和标点也会输出出来
	const char* example1 = "Line1\n" "line2" "line3" "line4";//没有必要担心引号外空格的影响
	std::cout << example << std::endl;
	std::cout << example1 << std::endl;

	const char* name="Che\0rno";  //"Cherno\0"     "Cherno"代表的其实是地址，而不是这个字符本身
	std::cout<<strlen(name)<<std::endl;      //3

	/*char* name1 = (char*)"cherno"; */     //如果没有（char*）会报错，因为我们无法将一个const char量赋给一个char
	                          //此外由于字符串变量的内存是只读的，所以即使再release中运行成功，也无法修改其中的值
	/*name1[2] = 'a';
	std::cout << name1<<std::endl; *///输出仍然是“cherno”，不是“charno”
	/*这里面内存为只读的原因是它指针指向的是const char变量, 而const char变量存储再只读空间中，
	即使在这里把输入（char*）（（char）"cherno")也不行，应为它实际指向的仍然是const char 类型的数据*/
	
	//如果真的有修改的需求那么就把类型定义为一个数组而不是指针
	char name2[] = "cherno";  //这里相当于新建了一部分内存，将cherno赋给这个数组，而这个数组是char类型的所以可以更改
	name2[2] = 'a';
	std::cout << name2 << std::endl;

	//其他种类的字符串
	const wchar_t* name3 =L"Cherno";    //2个字节 在win   4个字节在linux
	const char16_t* name4 = u"Cherno";  //2个字节
	const char32_t* name5 = U"Cherno";  //4个字节


	std::cin.get();
}