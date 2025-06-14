//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//// 递增运算符重载 ++
//// ch==重载<<运算符
//class MyInteger
//{
//	friend ostream& operator<< (ostream& cout, MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//	// 重载前置/后置++运算符
//	MyInteger& operator++()
//	{
//		m_Num++;
//		return *this;
//	}
//	void operator++(int) //int代表占位参数，可以用于区分前置和后续递增
//	{
//		//先记录当时结果，后递增，最后返回结果
//		MyInteger temp = *this;
//		m_Num++;
//		return temp;
//		
//	}
//};
//
//// friend ostream& operator<< (ostream& cout, MyInteger myint);
//int main()
//{
//	return 0;
//}
