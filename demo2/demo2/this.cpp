//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//// this指针指向被调用的成员函数所属对象；
//// 解决名称冲突 
//// 返回对象本身
//class Person
//{
//public:
//	Person(int age)
//	{
//		// this指针指向被调用成员函数所属对象 
//		this->age = age;
//	}
//	Person& PersonAddAge(Person& p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
//void test01()
//{
//	Person p1(18);
//	cout << "age:" << p1.age << endl;
//}
//
//void test02()
//{
//	Person p1(10);
//	Person p2(20);
//	p2.PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2 = " << p2.age << endl;
//
//}
//int main()
//{
//
//	test01();
//
//	test02();
//	return 0;
//}
