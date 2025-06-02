#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

// C++但撒特性：封装，继承，多态、
// C++认为万事万物皆为对象，对象上有其属性和行为

// 具有相同性质的对象可以抽象称为类
// 封装

// 设计一个园类，求周长

const double PI = 3.14;
class Circle
{
	// 访问权限----------------1
public: // 公共权限
	// 属性--------------2
	int m_r;
	// 行为--------------3
	// 获取园的周长；
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	// 通过猿类创建一个具体的圆
	// 实例化 （通过一个类创建一个对象 ）
	Circle c1;
	c1.m_r = 10;
	cout << "圆的周长是" << c1.calculateZC() << endl;

	system("pause");
	return 0;
}