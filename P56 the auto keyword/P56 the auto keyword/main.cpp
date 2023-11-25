#include <iostream>
#include <vector>
#include <unordered_map>

#define Log(x)	std::cout<<x<<std::endl;

const char* GetName()
{
	return "Cherno";
}

class Device {};

class DeviceManager
{
private:
	std::unordered_map<std::string, std::vector<Device*>> m_Devices;
public:
	const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const
	{
		return m_Devices;
	}
};

int main()
{
	int a = 5;
	auto b = a;  //�������Զ��ƶ�����
	auto c = 5;  //�������5L����long��5.5f����float,һ���ı���������Ҳ����ű仯
	auto name = GetName();
	/*int a = name.size();*/    //����������Ϊname����string   //��auto���ǿ��ܺ���һЩ�ı䣬�Ӷ��������ƻ��ԣ����һή�Ϳɶ���

	std::vector<std::string> strings;
	strings.push_back("Apple");
	strings.push_back("Orange");
	
	for (std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); it++)   //std::vector<std::string>::iterator���Ի�Ϊauto
	{
		std::cout << *it << std::endl;
	}

	/*using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>;*/
	/*typedef std::unordered_map<std::string, std::vector<Device*>> DeviceMap;*/

	DeviceManager dm;
	const std::unordered_map<std::string, std::vector<Device*>>& devices=dm.GetDevices();
	/*const DeviceMap& devices = dm.GetDevices();*/
	/*const auto& devices = dm.GetDevices();*/       //�����ַ����������̳���  //autoǰ���const�ͺ����&��������

	std::cin.get();
}

//auto����������൱����ʱ���ʹ��