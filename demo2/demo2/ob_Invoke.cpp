//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//// 只要创建一个类，
//// 编译器默认给类添加3个函数  构造，析构，拷贝（值拷贝）
//class Person
//{
//public:
//	Person()
//	{
//		cout << " " << endl;
//	}
//	Person(int age)
//	{
//		cout << "有参函数" << endl;
//		m_Age = age;
//	}
//	Person(const Person& p)
//	{
//		cout << "拷贝函数" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person()
//	{
//		cout << "Person 析构函数调用" << endl;
//	}
//
//
//	int  m_Age;
//};
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//	cout << " p2的年龄: “ " << p2.m_Age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}
