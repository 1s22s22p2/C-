#include <iostream>

#define Log(x)	std::cout<<x<<std::endl;

using String = std::string;

class Entity
{
private:
	String m_name;
public:
	Entity()
		:m_name("Unknown") 
	{
		std::cout << "construct 1" << std::endl;
	}
	Entity(const String& name)         //const string���������ַ�������,string������,��Ϊ���string��Ҫ���þ�Ҫ�ĳɣ���string&��cherno��
		:m_name(name) 
	{
		std::cout << "construct 2" << std::endl;
	}
	const String& GetName() const
	{
		return m_name;
	}
};

int main()
{
	Entity* e;
	{
		//ջ����
		Entity entity;
		Entity entity1("cherno");
		Entity entity2 = Entity("cherno");   //������Ҳֻ����һ�ι��캯��
		e = &entity2;
		std::cout << entity2.GetName() << std::endl;

		//�ѷ���
		Entity* entity3 = new Entity("cherno");    //new Entity����˼�������ڶ��Ϸ������ڴ棬Ȼ��������Entity*������һ��ָ��ָ����ڴ�
		e = entity3;                               //e=&entityҲ����
		std::cout << (*entity3).GetName() << std::endl;
	/*	std::cout << entity3->GetName() << std::endl;*/
	
	}                                        //������һ���Ǻ�����Ҳ������if��䣬������������
	/*delete entity; */   //���ﶨ���entityָ�볬���������������������٣���������ָ����ǲ����ڴ����ɱ�ռ��
	delete e;             //�������delete�ͻᵼ���ڴ�й¶

	//std::cin.get();
	//{
	//	int* x = new int;
	//}
	//delete x;
}

//�������ǳ��󣬻�����Ҫ��ʽ�ؿ��ƶ�����������ڣ���ô�ڶ��ϴ�����������ջ�ϣ������Զ����գ�Ҳ�ܿ�