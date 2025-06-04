//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//// 静态成员对象  所有对象共享一份数据 
//// 在编译阶段分配内存 类内声明，类外初始化
//class Person {
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "diaoyong static" << endl;
//		// 静态成员函数不能访问非静态变量
//	}
//};
//
//int Person::m_A = 100;
//
//void test()
//{
//	Person p;
//	cout << p.m_A << endl;
//}
//
//void test02()
//{
//	Person p;
//	cout << Person::m_A << endl;
//	// 静态尘缘变量科研直接访问通过类名；
//}
//// 静态成员函数
//
//int main()
//{
//	test();
//	test02();
//	Person q;
//
//	q.func();
//	Person::func();
//
//	return 0;
//}
