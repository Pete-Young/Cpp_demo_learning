//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//// 运算符重载  对已有运算符进行重新定义，赋予另一种功能，以适应不同数据类型
//// 两个自定义数据类型相加
//class Person
//{
//public:
//// 成员函数重载+运算符
////	Person operator+(Person& p)
////	{
////		Person temp;
////		temp.m_A = this->m_A + p.m_A;
////		temp.m_B = this->m_B + p.m_B;
////		return temp;
////	}
//int m_A;
//int m_B;
//};
//// 全局函数重载+运算符
//Person operator+(Person& p1, Person& p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 20;
//	p2.m_B = 20;
//	Person p3 =  p1 + p2;
//	cout << p3.m_A << p3.m_B << endl;
//
//}
//// 运算符重载也可以发生函数重载 
//int main()
//{
//	test01();
//	return 0;
//}
