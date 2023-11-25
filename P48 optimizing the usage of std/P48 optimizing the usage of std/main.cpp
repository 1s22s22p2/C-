#include <iostream>
#include <vector>
#include <string>

struct Vertex
{
	float x, y, z;
	Vertex(float x, float y, float z)
		:x(x), y(y), z(z) {}
	Vertex(const Vertex& other)
		:x(other.x), y(other.y), z(other.z)
	{
		std::cout << "Copied Vertex" << std::endl;
	}
};

#define Log(x)	std::cout<<x<<std::endl;

int main()
{
	//std::vector<Vertex> vertices;   //�����Ǵ���Vectorʱ����ʵ����ʱ���������ĵ�ǰջ֡�й�����,������
	//vertices.push_back({ 1,2,3 });  //��vertex����Ȼ�����vertices��
	//vertices.push_back({ 4,5,6 });  //��vertex����Ȼ�����vertices�У�����һ�θ��ƣ�Ȼ��Ϊ�����vertex��vertices�ָ�����һ��
	//vertices.push_back(Vertex(7,8,9 ));//��vertex����Ȼ�����vertices�н���һ�θ��ƣ�Ȼ��Ϊ�����vertex��vertices��������Vertex���ָ���������
	// 
	//�ܹ������θ���,�����n�������Ĳ�������ô��Ҫ����n��n+1��/2��
	////�Ż�����1�����ǿ������ʵ�λ�ù����Ǹ�vertex����vector������ڴ���
	////Ԥ��ȷ��Ҫ�洢���������������Ӧ���ڴ�,ʹ֮û�б�Ҫ������С
	



	//std::vector<Vertex> vertices;   
	///*std::vector<Vertex> vertices1(3);*/    //������ʵ���ϻṹ������vertex���󣬵�����ֻ�����㹻���ڴ����洢����
	//vertices.reserve(3);                     //reserve����ȷ�����㹻���ڴ棬����resizeҲ��һ������
	//vertices.push_back({ 1,2,3 });  
	//vertices.push_back({ 4,5,6 }); 
	//vertices.push_back(Vertex(7, 8, 9));     //�ܹ������θ���
	////n�θ���

	std::vector<Vertex> vertices;
	vertices.reserve(3);                     
	vertices.emplace_back(1.0f, 2.0f, 3.0f);  //ֱ���������ײ��������Ԫ�أ�ʡ���˿����Ĺ���
	vertices.emplace_back(4.0f, 5.0f, 6.0f);
	vertices.emplace_back(7.0f, 8.0f, 9.0f);
	//��emplace��ô���ݵľͲ���vertex�˶��Ǵ����˹��캯���Ĳ����б�
	//��Ҫ����vector�ڴ��������²�������һ��vertex����
}
//vector ��ԭ���������ǰvector���ڴ治������ô�ͽ���ǰvector�����ݴ��ڴ�ľ�λ���Ƶ���λ�ã�Ȼ��ɾ����λ�õ��ڴ棬
//���Ե����ǳ���push_backһ��Ԫ��ʱ������ڴ�����ͻ������С���·��䣬�ͻὫ��������
//��α��⸴�ƶ������Ż�����������Ҫ������֮һ