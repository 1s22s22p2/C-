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
		struct               //��������������ʹ����Ĭ��Ϊһ���ṹ�壬������һ�����ͣ���������Ͳ����Է�����
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
		union                    //����
		{
			float a;
			int b;                //�����ַ���������ͬ���ڴ�
		};
	};
	Union u;
	u.a = 2.0f;
	std::cout << u.a << ',' << u.b << std::endl;

	Vector4 vector = { 1.0f,2.0f,3.0f,4.0f };
	PrintVector2(vector.a);
	PrintVector2(vector.b);  //��ά����ת����άʹ��
	Log("------------------------------------")
	vector.z = 500.f;
	PrintVector2(vector.a);
	PrintVector2(vector.b);

	//unionͨ����������˫��


	std::cin.get();
}
//union���������������أ���ɶ��Ը�ǿ