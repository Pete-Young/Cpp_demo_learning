#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
// 函数提高
// 函数默认参数

// 函数的形参列表中的形参可以有默认值
// 形参= 默认值
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}
// note：1.如果某个位置已经有了默认参数，那么这个位置往后都必须有
// 2. 如果函数声明有默认参数，哈数实现就不能有默认参数
// 声明和实现只能有一个有默认参数
int func2(int a, int b);

int func2(int a = 10, int b = 20)
{
	return a + b;
}
// 函数的占位参数 用来做占位，调用函数时必须填补这个位置
// 目前的阶段的占位参数还用不到，后面会用到
// 占位参数可以有默认参数
void func3(int a, int = 10)
{
	cout << "this is a func" << endl;
}

// 函数重载
// 作用： 函数名可以相同，提高复用性
// 满足条件：1.同一个作用域下
// 2.函数名名相同
// 3.函数参数类型不同或个数或顺序
void f() {
	cout << "func" << endl;
}
void f(int a) {
	cout << "func int a" << endl;
}
void f(int a, double b) {
	cout << "func double a" << endl;
}
 	//note：1. 引用作为重载条件

	// 2. 函数重载碰到默认参数
void fun(int& a)
{
	cout << "fun(int &a)调用" << endl;
}

void fun(const int& a)
{
	cout << "fun(const int &a)调用" << endl;
}
// 2
// 写函数重载避免加入默认参数

int sf_main()
{
	cout << func(10) << endl;
	
	func3(10, 10);
	// 重载
	f();
	f(10);

	int a = 10;
	fun(a);  // int &a 调用
	fun(10);  // const int 调用；




	system("pause");
	return 0;
}
