#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
// 静态多态  函数重载和运算符重载    早绑定
// 动态多态  派生类和虚函数实现运行时多态   晚绑定

class Animal
{
public:
	virtual void speak()
	{
		cout << "animal speaking" << endl;
	}
};
// 想要毛说话，要地址晚绑定  
// 子类要重写的虚函数  函数返回类型 函数名  相同
// 父类的引用或指针传递
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};
void doSpeak(Animal &animal)
{
	animal.speak();
}
void test01()
{
	Cat cat;
	doSpeak(cat);
}
int main()
{
	test01();
	return 0;
}
