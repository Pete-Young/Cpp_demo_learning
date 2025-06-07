//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//// 重载左移运算符
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	Person(int a,int b)
//	{
//		m_A = a;
//		m_B = b;
//
//	}
//private:
//	//利用成员函数重载左移运算符
//	//void operator<<(Person &p)
//	//{
//	//	
//	//}
//	int m_A;
//	int m_B;
//};
//// 只能利用全局函数重载
//ostream & operator<<(ostream &cout,Person &p)
//{
//	cout << "m_A=" << p.m_A << p.m_A;
//	return cout;
//}
//void test01()
//{
//	Person p(10, 10);
//	cout << p << "hello,world" < < endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}
