//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
////成员函数后加const成为常函数  常对象
//class Person
//{
//public:
//	//const Person * const this;在成员函数后面加const修饰this指向
//	void showPerson() const
//	{//this指针的本质是指针常量
//		// this -> m_A = 100;
//		this->m_B = 100;
//	}
//	void func() {}
//	int m_A; 
//	mutable int m_B;
//};
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
//
//void test02()
//{
//	const Person p;// 常对象只能调用常函数
//	// p.m_A = 100;
//	p.m_B = 1000;
//	p.func();
//}
//int main()
//{
//	return 0;
//}
