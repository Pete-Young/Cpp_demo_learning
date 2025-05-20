#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 全局变量
int g_a = 10;
int g_b = 10;
// 全局常量
const int  c_g_a = 10;

// int* func()
// {
// 	int a = 10; // 局部变量，存放早栈区，函数执行玩后自动释放
// 	return &a;// 返回局部变量的地址
// }
int* func2()
{
	// 利用new关键字，可以将数据开辟到堆区
	int * p = new int(10);
	return p;
}
 //

// new的基本语法
int* func3()
{
	// 在堆区创建整型数据
	// new返回 该数据类型的指针
	int* p = new int(100);
	return p;
}
void test01()
{
	int* p = func3();
	cout << *p << endl;
	cout << *p << endl;
	
	delete p;
	// cout << *p << endl;// 内存已经被释放，会报错
}

// 在堆区开辟数组
void test02()
{
	int * arr = new int[10]; // 数组由10个元素
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 10; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	// 你内存四个区域
	// 代码区：存放函数体的 二进制 代码，操作系统进行管理的
	// 全局区：存放全局变量和静态变量及常量
	// 栈区：由编译器自动释放，存放函数的参数值，全局变量等
	// 堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收
	// 赋予不同的生命周期，给与更大的灵活性
	
	//程序运行前 代码区 共享，只读  和全局区（全局变量和静态变量存放在此.
	// 全局区还包含了常量区, 字符串常量和其他常量也存放在此.）

	//普通局部变量
	int a = 10;
	int b = 10;

	// cout << (int)&a << endl;

	// 静态变量
	static int s_a = 10;

	// 常量
	/// 字符串常量
	cout << "字符串常量的地址" << (int)&"hello" << endl;

	//---------------------------------------------------
	// 程序运行后
	// 栈区 编译器自动分配释放；
	//栈区note： 不要返回局部变量的地址
	// int* p = func();
	// cout << *p << endl;  //第一次可以打印以为编译器进行了保留
	// cout << *p << endl;  // 第二次就不再保留了

	//------------------------------------------------------
	// 堆区：由程序员分配释放
	// 在C++ 中主要利用new关键字在堆区开辟内存；

	int* p = func2();
	cout << *p << endl;
	//new操作符 释放利用delete操作符
	// 语法：new 数据类型
	
	// test01();

	test02();
	


}