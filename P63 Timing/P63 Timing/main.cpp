#include <iostream>
#include <chrono>
#include <thread>

struct Timer
{
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;

	Timer()
	{
		start = std::chrono::high_resolution_clock::now();
	}

	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;
		std::cout << "Timer took" << duration.count()*1000.0f << 'ms' << std::endl;
	}
};

void Function()
{
	Timer timer;

	for (int i = 0; i < 100; i++)
	{
		std::cout << "Hello" << std::endl;
	}
}

void Function1()
{
	Timer timer;

	for (int i = 0; i < 100; i++)
	{
		std::cout << "Hello\n";
	}
}

#define Log(x)	std::cout<<x<<std::endl;

int main()
{
	using namespace std::literals::chrono_literals;           //��������ſ�����1s�е�s   

	auto start = std::chrono::high_resolution_clock::now();   //���ﷵ��ֵ�����൱������ѡ����auto

	std::this_thread::sleep_for(1s);                          //1s���Ҳ�һ����׼ȷ��1s����Ϊ�����̵߳�˯��ʱ�䲻�ܱ�֤�����Ǹ�������˯��ʱ�䣬���Ҽ�ʱ����Ҳ��ʱ�仨��
	
	auto end = std::chrono::high_resolution_clock::now();

	std::chrono::duration<float> duration = end - start;
	std::cout << duration.count() << 's' << std::endl;
	//ʹ��������ƽ̨���Էǳ��Ƽ��������ڴ���һЩ�ײ������

	std::thread function(Function);
	std::thread function1(Function1);

	Function();            //����ֱ�Ӷ���һ���࣬���ö��������������ʱ������������ʵ�ּ��㺯��ʱ���ͬʱ����������
	Function1();

	function.join();
	function1.join();

	std::cin.get();
}