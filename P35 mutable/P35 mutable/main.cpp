#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

class Entity
{
private:
	int x=0;int y=0;
	mutable int z=0;
public:
	void getX() const
	{
		std::cout << x << std::endl;
	}
	/*void SetX(int xx) const
	{
		x = xx;
	}*/
	void SetZ(int zz) const
	{
		z = zz;
	}                                  //Mutable最长用的方法就是这个，我们可以依靠这个来计算类中某一函数的调用次数
};

int main()
{
	const Entity e;
	e.getX();
	e.SetZ(1);

	int x = 8;
	auto f = [=]()  //一个lambda就像一个一次性的小函数，我们可以写出来并赋值给一个变量
	{
		/*x++;*/            //=或者x都不允许直接修改x
		int y = x;
		y++;
		std::cout << y << std::endl;//只要在[]里面输入x，&x，=，&那么它就会自动捕捉前面程序的x
		std::cout << "hello" << std::endl;
	};
	f();

	auto g = [&x]()        //如果使用&x或者&则它可以修改程序中的x
	{
		x++;
		std::cout << x << std::endl;
	};
	std::cout << x << std::endl;
	g();
	std::cout << x << std::endl; //这个会修改x实际值

	auto k = [x]()  mutable      //加入mutable就可以修改
	{
		x++;
		std::cout << x << std::endl;
	};
	std::cout << x << std::endl;
	k();    //这个只不过是建立了一个局部变量，不修改x
	std::cout << x << std::endl;

	std::cin.get();
}