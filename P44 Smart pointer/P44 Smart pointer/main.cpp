#include <iostream>
#include <string>
#include <memory>          //Ҫ������������ָ�룬����Ҫд���

#define Log(x)	std::cout<<x<<std::endl;

class Entity
{
public:
	Entity()
	{
		std::cout << "Create Entity" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroy Entity" << std::endl;
	}

	void print() {}
};



int main()
{

	//unique_ptr
	{
		std::unique_ptr<Entity> entity;    //��std�����ռ䣬��һ��ģ�����    
		//������ʵ���ϲ�û�и�entity�κοռ䣬��ֻ������һ��ָ��
		//����ģ�������������ǿ�����ָ��ֻ��ָ��Entity�࣬��������û��ʵ����
		std::unique_ptr<Entity> entity1(new Entity);
		/*std::unique_ptr<Entity> entity1=new Entity();*/  //unique_ptr�ϱ�ע��explicit,����ֱ����ʽ���ù��캯��
		std::unique_ptr<Entity> entity2 = std::make_unique<Entity>();  //����������ã���Ϊ������캯�������׳��쳣������Ҳ����õ�һ��û�����õ�����ָ�루����ڴ�й¶��  //�쳣��ȫ
		/*std::unique_ptr<Entity> e = entity;  */                      //���������濽�����캯���Ϳ��������������ʵ���ϱ�ɾ����
		entity = std::make_unique<Entity>();
		/*std::unique_ptr<Entity> entity6;
		entity6 = new Entity;
		std::unique_ptr<Entity> entity7;
		entity7 = entity1;
		std::unique_ptr<int> a;*/                   //���������һ��������ָ�뵫�ǲ���ʼ������ô����ͨ����ֵ��ʼ����ֻ��ͨ��entity = std::make_unique<Entity>();

		entity->print();
	}
	//Entity e;
	//Entity* entity3;       //�������ָ��ʵ����Ҳû��ʵ����������Ҳ�����ù��캯��
	//Entity* entity4 = &e;   //�����½�ָ�벢������ù��캯���������ܹ�ʵ�������ֻ��new Entity ������ʵ�������
	//Entity* entity5 = new Entity();

	//shared_ptr
	{
		std::weak_ptr<Entity> weakEntity;   //���Ը���shared_ptr���ǲ�������������
		{
			std::shared_ptr<Entity> e0;
			{
				std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
				/*	std::shared_ptr<Entity> sharedEntity2(new Entity);*/   //��Ȼ�������е��ǲ�Ҫ�ã�
					//��Ϊshared��Ҫ�������һ���ڴ棬�������ƿ飬�����洢���ü���
					//����������ȴ�����һ��new Entity������shared_ptr,��������䣬�������ڴ���䣬һ��new ENtity�ķ��䣬����shared_ptr�Ŀ����ڴ��ķ���
					//����ǰ�߸���Ч��
				e0 = sharedEntity;  //���Ը���
				weakEntity = e0;   

			}
		}  //֪��ȫ������������ŵ�����������
	}      
	//���������ǵ��ڴ�����Զ�����share_ptr����һ�㻨����Ϊ���ü���ϵͳ������ʹ��unique_ptr����Ϊ���Ļ�����С


	std::cin.get();
}