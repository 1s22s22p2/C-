#include <iostream>
#include <thread>       //这个头文件使我们可以使用线程类的所以东西

#define Log(x)	std::cout<<x<<std::endl;

static bool s_Finished = false;
static bool s_Start = false;

void DoWork()
{
	using namespace std::literals::chrono_literals;
	while (!s_Finished)
	{
		std::cout << "Working...\n";
		std::this_thread::sleep_for(1s);     //控制打印的时间间隔
	}
}

void PleaseWait()
{
	using namespace std::literals::chrono_literals;

	std::cout << "Started thread id=" << std::this_thread::get_id() << std::endl;

	while (!s_Start)
	{
		std::cout << "Please wait\n";
		std::this_thread::sleep_for(1s);                //this_thread是用来给当前线程下命令
	}
}

int main()
{
	std::thread worker(DoWork);            //接受一个函数指针
	std::thread wait(PleaseWait);

	std::cin.get();
	s_Finished = 1;
	std::cin.get();
	s_Start = 1;


	worker.join();                          //等待一个线程加入的方法
	wait.join();
	//写这个join的目的的是在主线程上等待工作线程完成所有执行，再继续执行主线程

	std::cout << "Finished" << std::endl;
	std::cout << "Started thread id=" << std::this_thread::get_id() << std::endl;


	std::cin.get();
}