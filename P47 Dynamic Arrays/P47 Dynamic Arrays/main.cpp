#include <iostream>
#include <Vector>     //�ö�̬�������Ҫ��ע���ͷ�ļ�

#define Log(x)	std::cout<<x<<std::endl;

struct Vertex
{
	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << ',' << vertex.y << ',' << vertex.z;
	return stream;
}

void finction(const std::vector<Vertex>& vertices )  //��������
{
}

int main()
{
	/*Vertex* vertices = new Vertex[5];
	vertices[10];*/  //�޷�ʹ�ó���ʮ�Ĳ���
	//���û�ж�̬���飬��ô������ȷ����Ŀ�ı���ֻ�ܶ��御���ܴ�����飬�����������˷��ڴ�
	std::vector<Vertex> vertices;                    //��java�в��ܴ������������intҪ����Integer������C++ֱ������int�Ϳ�����
	std::vector<Vertex*> vertices1;                   //ע����������һ���ǽ�Vertex��һ���д洢����һ���Ǵ洢vertexָ��
	vertices.push_back({1,2,3});
	vertices.push_back({ 4,5,6 });
	
	for (int i = 0; (unsigned)i < vertices.size(); i++)   //�Ⱥ����߱���Ϊunsigned����ᾯ��
	{
		std::cout << vertices[i] << std::endl;
	}

	for (const Vertex& v:vertices)
	{
		std::cout << v << std::endl;
	}

	vertices.clear();  //���vertex�б�
	vertices.erase(vertices.begin() + 1);      //���к��������ǵ����������Բ���ֱ����������֣�����Ҫ���ڶ���Ԫ��ɾ������ôҪ��begin����+1

	std::cin.get();
}

//vectorͨ������