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
	}                                  //Mutable��õķ���������������ǿ��������������������ĳһ�����ĵ��ô���
};

int main()
{
	const Entity e;
	e.getX();
	e.SetZ(1);

	int x = 8;
	auto f = [=]()  //һ��lambda����һ��һ���Ե�С���������ǿ���д��������ֵ��һ������
	{
		/*x++;*/            //=����x��������ֱ���޸�x
		int y = x;
		y++;
		std::cout << y << std::endl;//ֻҪ��[]��������x��&x��=��&��ô���ͻ��Զ���׽ǰ������x
		std::cout << "hello" << std::endl;
	};
	f();

	auto g = [&x]()        //���ʹ��&x����&���������޸ĳ����е�x
	{
		x++;
		std::cout << x << std::endl;
	};
	std::cout << x << std::endl;
	g();
	std::cout << x << std::endl; //������޸�xʵ��ֵ

	auto k = [x]()  mutable      //����mutable�Ϳ����޸�
	{
		x++;
		std::cout << x << std::endl;
	};
	std::cout << x << std::endl;
	k();    //���ֻ�����ǽ�����һ���ֲ����������޸�x
	std::cout << x << std::endl;

	std::cin.get();
}