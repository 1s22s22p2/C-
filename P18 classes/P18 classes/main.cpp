#include <iostream>

#define Log(x) std::cout<<x<<std::endl;

class Player                //���������Ƴɵı������������´�������Ĺ��̽���ʵ����,Ĭ����������еķ��ʿ��ƶ���˽�еģ�ֻ�����ڲ��������Է�����Щ����
{
public:
	int x, y;
	int speed;
	void move(int xa, int ya)    //�����������棬����Ҫ�ٴ�����������������е�x,y,speedֱ�����������еľͿ���
	{
		x += xa*speed;
		y += ya*speed;
	}
};                          //at the end we have a ";"

int main()
{
	Player player;           //ʵ����
	player.x = 5;
	Log(player.x);
	player.move(1, -1);
	std::cin.get();
}