#include <iostream>
#include <string>

#define WAIT std::cin.get()      //��ʹ��WAIT���滻Ϊstd::cin.get()������ʵ�ʷ��͸��������Ĵ������滻֮���
#define OPEN_CURLY {             //�껹�����޸��κζ��������ǣ��ܶ�ʱ��û������

//#ifdef PR_DEBUG                  //��仰����˼�����PR_DEBUG�����壬����DEGUGģʽ�£������Ѿ���Ԥ�����������ж�����
//#define Log(x)	std::cout<<x<<std::endl           //����Ǻ�����ҪӦ�õĵط�
//#else
//#define Log(x)
//#endif

//#if 0

#if PR_DEBUG==1                                   //�����Ӹ��������ǵ�����ֻҪ������Ԥ�������������޸�ֵ,ע��Ԥ�����������и�ֵ��Ҫ�пո�
#define Log(x)	std::cout<<x<<std::endl           //����Ǻ�����ҪӦ�õĵط�
#elif defined(PR_RELEASE)
#define Log(x)
#endif

/*#endif*/   //����ͨ�������ʽ�������������

#define MAIN intmain()\
{\
}                            //�����ͨ����б�������У�\��ת�壬�����Enter����ת��Enter�����ӿո�����������˼���������ͬһ�У�������\


int main()
OPEN_CURLY
	Log("Hello");
	WAIT;
}

//�꾭������������־�ļ��������漰��˽�����Ը��û�����������release�в����Ե��ú꣬������־��Ҫʱ�䣬����Ϊ����������ٶȣ�Ҳ��Ӧ�ý����͸��û��Ĵ�����־����
//Ϊ����Debug��ʹ�ú꣬��Release�в�ʹ�ã�����Ŀ���ԣ�������Debug/win32��C++/Ԥ�������м���PR__DUG,��release�м�PR_RELEASE