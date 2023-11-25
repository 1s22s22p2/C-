#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

struct Vector2
{
	float x, y;
};

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	//String(const String& other)    //�������캯���������д����ô����һ��Ĭ�ϵĺ�����ǳ������
	//	:m_Buffer(other.m_Buffer),m_Size(other.m_Size) {}     //Ĭ��������
	//String(const String& other) = delete;  //��������ɾ���������캯��
	String(const String& other)
		:m_Size(other.m_Size)
	{
		std::cout << "Copied String!" << std::endl;
		m_Buffer = new char[m_Size+1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}

	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size+1];
		/*for (int i = 0; i < m_Size+1; i++)
		{
			m_Buffer[i] = string[i];
		}*/
		memcpy(m_Buffer, string, m_Size+1);      //�������Ч
	}

	char& operator[](unsigned int index)
	{
		return m_Buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);

	~String()
	{
		delete[] m_Buffer;
	}

};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}

//void PrintString(String string)
//{
//	std::cout << string << std::endl;
//}      
//���θ���

void PrintString(const String& string)   //����ͨ��const���ô��ݱ��������ǿ�������������ڲ���String copy=string������
{
	std::cout << string << std::endl;
}

int main()
{
	{
		int a = 2;
		int b = a;     //���ƣ�a,b�в�ͬ�ĵ�ַ
		b = 3;         //��ʹ��ֵ��bҲ����ı�a

		Vector2 c = { 2,3 };
		Vector2 d = c;
		d.x = 5;

		Vector2* e = new Vector2();
		Vector2* f = e;
		/*f++;*/             //eָ�벻��,Ӱ��ָ��
		f->x = 2;             //ͬʱӰ��e,f��Ӱ���ڴ�
	}
	{
		String string = "Cherno";
		String second = string;
		//�ᱨ����Ϊ���и���ԭ���ǰѺ������Ա���������Ƶ�һ���µ��ڴ��ַ����
		//���Զ�char*����Ҳ�����˸��ƣ������ڴ��е�������������һ����ֵ������ͬ���ڴ��ַ
		//m_Buffer���ڴ��ַ����������String����������ͬ��
		//�������򵽾�ͷʱ�����������ͻ���ã�Ȼ��ִ��delete[] m_Buffer���Σ������ͷ�ͬһ���ڴ�飬��Ϊ�ڴ��Ѿ��ͷ��ˣ������޷��ٴ��ͷ���
		//����������Ҫ����ʱ����һ���µ�char���飬���洢���Ƶ��ַ��������������������Ǹ���ָ�룻ֻ������shadow copy��ǳ��������Ҫ��Ϊ��deep copy�����
		second[2] = 'a';
		//ǳ��������ȥ��ָ������ݻ���ָ����ָ�ĵط���Ҳ���Ḵ����
		//������ݶ����Ǹ�����������
		//����д��¡�����ǽ����ÿ������캯��

		PrintString(string);
		PrintString(second);
	}
	std::cin.get();
}