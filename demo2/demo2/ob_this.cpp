//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//// 只有非静态成员变量属于类的对象上；
//// 成员变量和成员函数是分开存储的
//class Person
//{
//public:
//	int m_A;// 非静态成员变量 4
//	static int m_B;  //不变，不属于对象上
//	void func() {}
//	static void func2() {}
//};
//int Person::m_B = 10;
//void test01()
//{
//	Person p;
//	cout << "size of = " << sizeof(p) << endl;//空对象占用的内存空间
//	//C++编译器会给每个空对象分配一个字节空间 
//	// 每个空对象有独一无二的内存地址
//}
//int main()
//{
//	test01();
//	
//	return 0;
//}
