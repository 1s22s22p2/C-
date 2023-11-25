#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

struct Vector2
{
	float a, b;
};

struct Vector4
{
	union
	{
		struct               //必须匿名，匿名使它被默认为一个结构体，而不是一个类型，否则下面就不可以访问了
		{
			float x, y, z, w;
		};            
		struct
		{
			Vector2 a,b;
		};
	};
};

void PrintVector2(const Vector2& vector)
{
	std::cout << vector.a << ',' << vector.b << std::endl;
}


int main()
{
	struct Union
	{
		union                    //匿名
		{
			float a;
			int b;                //有两种方法处理相同的内存
		};
	};
	Union u;
	u.a = 2.0f;
	std::cout << u.a << ',' << u.b << std::endl;

	Vector4 vector = { 1.0f,2.0f,3.0f,4.0f };
	PrintVector2(vector.a);
	PrintVector2(vector.b);  //四维数组转化二维使用
	Log("------------------------------------")
	vector.z = 500.f;
	PrintVector2(vector.a);
	PrintVector2(vector.b);

	//union通常用来类型双关


	std::cin.get();
}
//union常用于替代类型相关，其可读性更强