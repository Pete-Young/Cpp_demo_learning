#define _CRT_SECURE_NO_WARNINGS
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

// 类的意义二
// 类在设计时，可以把属性和行为放在不同的权限下，加以控制
// 访问权限有三种：
// Public公共 成员类内可以访问，类外也可以
//  protected 保护 类内可以访问，类外不可以访问   儿子可以访问父亲的保护内容
// private私有  类内可以访问，类外不可以访问   儿子不可以访问父亲
//   
class Person
{
public:
	// 公共权限
	string m_name;
protected:
	string m_car;
private:
	int m_Password;
public:
	void func()
	{
		m_name = "张三";
		m_car = "拖拉机";
		m_Password = 123456;
	}
};

// C++ 中struct 和class的区别：默认的访问权限不同
// struct默认为共有，class默认为私有
class C1
{
	int m_A;
};
struct C2
{
	int m_A;
};


// 将成员属性设置为私有  
// 可以自己控制读写权限 可以检测数据有效性
// class Person
// {
// public:
// 	string m_Name;
// 	// 设置姓名
// 	void setName(string name)
// 	{
// 		m_Name = name;
// 	}
// 	// 获取姓名
// 	string getName()
//	{
//		return m_Name;
//	}
//	int getAge()
//	{
//		return m_age;
//	}
//	// 设置偶像
//	void setIdol(string idol)
//	{
//		m_idol = idol;
//	}
//private:
//	string m_name;// 姓名可读可写
//	int m_age = 18;//年龄  只读
//	string m_idol;  //偶像  只写
//};
int ob_main()
{
	// Person p1;
	// p1.m_name = "李四";
	// 保护权限的内容在类外访问不到
	// 私有权限内容在类外访问不到  
	// C1 c11;
	// C2 c2;

	// c11.m_A = 10;
	// c2. m_A = 10;
	
	// 通过猿类创建一个具体的圆
	// 实例化 （通过一个类创建一个对象 ）
	Circle c1;
	c1.m_r = 10;
	cout << "圆的周长是" << c1.calculateZC() << endl;

	// Person p;
	// p.setName("张三");
	// cout << "姓名" << p.getName() << endl;
	// p.m_Age = 20;
	// cout << "年龄" << p.getAge() << endl;

	// p.setIdol("小明");
	// cout << "偶像" << getIdol  只写状态外界访问不了

	

	

	system("pause");
	return 0;
}