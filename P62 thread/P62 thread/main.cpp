#include <iostream>
#include <thread>       //���ͷ�ļ�ʹ���ǿ���ʹ���߳�������Զ���

#define Log(x)	std::cout<<x<<std::endl;

static bool s_Finished = false;
static bool s_Start = false;

void DoWork()
{
	using namespace std::literals::chrono_literals;
	while (!s_Finished)
	{
		std::cout << "Working...\n";
		std::this_thread::sleep_for(1s);     //���ƴ�ӡ��ʱ����
	}
}

void PleaseWait()
{
	using namespace std::literals::chrono_literals;

	std::cout << "Started thread id=" << std::this_thread::get_id() << std::endl;

	while (!s_Start)
	{
		std::cout << "Please wait\n";
		std::this_thread::sleep_for(1s);                //this_thread����������ǰ�߳�������
	}
}

int main()
{
	std::thread worker(DoWork);            //����һ������ָ��
	std::thread wait(PleaseWait);

	std::cin.get();
	s_Finished = 1;
	std::cin.get();
	s_Start = 1;


	worker.join();                          //�ȴ�һ���̼߳���ķ���
	wait.join();
	//д���join��Ŀ�ĵ��������߳��ϵȴ������߳��������ִ�У��ټ���ִ�����߳�

	std::cout << "Finished" << std::endl;
	std::cout << "Started thread id=" << std::this_thread::get_id() << std::endl;


	std::cin.get();
}