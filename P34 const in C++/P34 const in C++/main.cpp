#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

class Entity
{
private:
	int m_X;
	int* m_Y;
	int m_Z;
	mutable int var;   //mutable��˼�ǿɱ�ģ���ô����������ǿ�����const�������޸�
public:
	int GetX() const        //ֻ���������������ô��,��˼��������������޸�ʵ�ʵ��࣬���ǲ����޸���ĳ�Ա����
	{
		/*m_X = 2;*/
		var = 3;
		return m_X;
	}
	int GetX()
	{
		return m_X;   //ͬ������Ҳ����ͨ��const����
	}
	void SetX(int x)
	{
		m_X = x;
	}
	const int* const GetY() const     //���Ƿ�����һ�������޸ĵ�ָ�룬ָ�������Ҳ�����޸ģ������������Ҳ��ŵ�����޸�ʵ�ʵ�Entity��
	{
		return m_Y;
	}
	int GetZ()
	{
		return m_Z;
	}
};
void PrintEntity(const Entity& e)
{
	std::cout << e.GetX() << std::endl;
	std::cout << e.GetY() << std::endl;
	/*std::cout << e.GetZ() << std::endl;*/        //����GetZ����������ʹ�ã���Ϊ���ǳ�ŵ������Entity���������ǵ�����һ���п��ܸı�Entity�ĺ���
	//ͨ��const Entity���Է�������const����������GetX�������õ���const�Ǹ���������δעconst�����û��const���Ǹ�
}

int main()
{
	/*int a=5;
	a = 6;*/
	/*const int a=0;        //const��������Ҫ����max��minʱ�Ǻ��������
	a = 5;*/

	/*const int MAX_AGE = 90;
	int* a = new int;
	*a = 2;
	a = (int*)&MAX_AGE;
	*a = 5;
	std::cout << *a << std::endl;
	std::cout << MAX_AGE << std::endl;
	int* A = (int*)&MAX_AGE;
	*A = 5;
	std::cout << *A << std::endl;
	std::cout << MAX_AGE << std::endl;*/


	//const int* b = new int;       //��˼�����ǲ����޸�ָ����ָ���������(a��������ַ���ǿ��Ըı�)
	////int const* ��const int* ��˼һ��
	///**b = 2;*/
	//b = (int*)&MAX_AGE;
	///**b = 5;*/ //��ʹ��ָ�ķ���������µ�����Ҳ�����Ըı�

	int* const c = new int;       //��˼��c�����ܸı䣬���ǿ��Ըı���ָ�������
	*c = 5;

	const int* const d = new int;  //���߶����ܸı�

	std::cin.get();

	//ע���
	const int MAX = 90;
	int* f = new int;
	*f= 2;
	f = (int*)&MAX;
	*f = 5;
	std::cout << *f << std::endl;
	std::cout << MAX << std::endl;   //����const�õ������int��char,float֮��Ĳ�����ռ�

	int i = 1;
	const int MAX_= i;
	int* e = new int;
	*e = 2;
	e = (int*)&MAX_;
	*e = 5;
	std::cout << *e << std::endl;
	std::cout << MAX_ << std::endl;  //�ñ�����const��ֵ����ռ�
	//��������Զ����������ͣ��ṹ������ࣩ����ռ�
	//�ַ�������ռ䵫���ַ�������ֻ���ռ�
}