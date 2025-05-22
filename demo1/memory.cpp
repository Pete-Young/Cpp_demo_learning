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
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放堆区数组
	//释放数组要加[]
	delete[] arr; 
}

// 交换函数
// 值传递；地址传递；引用传递
void swap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

// 1 不要返回局部变量的引用
int& test1()
{
	int a = 10;  // 局部变量存放在栈区
	return a;
}
// 2 函数的调用可以作为左值
int& test2()
{
	static int a = 10;
	return a;
}

void show(int& val)
{
	// val = 1000;//防止这样的改动
	cout << "val = " << val << endl;
}
int main_memory()
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
	// 释放堆区的数组

	// 引用
	// 作用：给变量起别名
	// 语法：  数据类型 & 别名 = 原名
	int& c = a;
	c = 20;
	cout << a << endl;
	// note：1.引用必须初始化，int &b;错误的
	// 2.引用一旦初始化后就不可以更改了；
		// 

	// 引用做函数参数
	// 作用：函数传参时，利用引用让形参修饰实参
	swap03(a, b);
	cout << a << endl;
	cout << b << endl;
	// 引用和地址效果一样，引用更为简单

	// 引用做函数返回值
	// 1 不要做函数局部变量的引用
	// 2 可以作为左值
	int& ref2 = test2();
	cout << "ref2 = " << ref2 << endl;
	test2() = 10000;
	cout << "ref2 = " << ref2 << endl;
	// 如果函数的返回值是引用，函数可以作为左值

	// 引用的本质
	// 引用的本质在C++内部实现是一个指针常量  

	// 常量引用
	// 用来修饰形参防止误操作
	// const int& ref = 10;// 相当于int temp = 10;const int & temp;
	// ref = 10;// 加入const 之后变为制度，不可修改；
	int a1 = 100;
	show(a1);
	return 0;






}