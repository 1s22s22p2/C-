#include <iostream>

#define Log(x) std::cout<<x<<std::endl;

void increment(int value)
{
	value++;
}

void increment1(int& value)
{
	value++;
}

void increment2(int* value)
{
	(*value)++;      //(*value)++ and *value++ have different meanings
}

int main()
{
	int a = 5;
	int* b = &a;      //& uses before a variable which is exist ,it means getting its address
	int& ref = a;     //& part of type,we can use ref as a,and it can't change forever we can't use &ref=b or ref=b
	ref = 2;
	Log(a);
	increment(a);
	Log(a);
	increment1(a);
	Log(a);
	increment2(&a);   //the way to give the pointer a address
	Log(a);

	std::cin.get();
}