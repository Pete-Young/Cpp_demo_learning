#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "exchange.h"

void swap02(int *a ,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
// 冒泡排序函数
void bubble(int* arr, int len)
{
	cout << arr << endl;
	for (int i = 0; i < len -1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArry(int* arr, int len)
{
	cout << "start of arry" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "end of arry" << endl;
}

int main()
{
	int arr[5];
	// 一维数组定义：3种方法
	arr[0] = 10;
	int arr2[5] = { 10,20,30,40,50 };
	cout << "数组[0]：" << arr2[1] << endl; 
	//数组名用途  1.统计长度；2.获取内存首地址
	cout << "整个数组占用空间=" << sizeof(arr2) << endl;
	cout << "每个元素占用空间=" << sizeof(arr2[0]) << endl;
	cout << "数组中元素个数为=" << sizeof(arr2) / sizeof(arr2[1]) << endl;
	// 2.获取首地址
	//cout << "\t数组首地址为：" << (int)arr2 << endl;
	//cout << "\t数组中第一个元素地址：" << (int) & arr2[0] << endl;
	//cout << "\t数组中第二个元素地址：" << (int) &arr2[1] << endl;
	//差4个字节
	//数组名是常量，不可赋值

	//二维数组有4种定义方式
	// int arr3[2][3];
	int arr4[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	int arr5[2][3] = { 1,2,3,4,5,6 };
	int arr6[][3] = { 1,2,3,4,5,6 };
	//二维数组名称用途
	//值传递
	//若函数不需返回值，声明的时候可以写void
	//值传递时，形参改变不影响实参

	//函数常见样式
	//函数声明可以写多次，定义只能写一次；
	int c = 10;
	int b = 23;
	swap(c, b);

	//指针
	//定义指针
	int a = 10;
	int* p;
	//让指针记录变量a的地址
	p = &a;
	cout << "a的地址是：" << &a << endl;
	cout << "指针p为：" << p << endl;
	//使用指针
	//可以使用解引用方式来找到指针指向的内存
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p为：" << *p << endl;

	//指针所占内存空间
	//在32位操作系统下占用4个字节，不管什么类型
	//64位下占用8个字节
	int* pi = &a;

	cout << "sizeof(p) = " << sizeof(p) << endl;
	cout << "sizeof(int *) = " << sizeof(int *) << endl;
	
	//指向内存中编号位0的空间的指针：空指针
	//用于初始化指针变量
	int* p1 = NULL;
	// *p1 = 100;
	//空指针不能进行访问

	//野指针：指针变量指向非法的,避免出现野指针
	//int* p2 = (int*)0x1100;
	//cout << *p2 << endl;
	//const修饰指针：常量指针 const int* p = &a;
	//指针的指向可以改变，但指向的值不可以改变；

	//const修饰常量：指针常量 int*const p = &a;
	//指针的指向不可以改，指针指向的值可以改变；

	//const既修饰指针又修饰常量 const int * const p = &a;
	//都不可以修改； 

	//指针和数组
	int arr_1[10] = { 1,3,2,4,5,6,8,7,9,10 };
	cout << "第一个元素为：" << arr_1[0] << endl;
	int* pn = arr_1;//数组首地址
	cout << "利用指针访问第一个元素：" << *pn << endl;
	cout << pn << endl;
	pn+=1; 
	//指针加减整数 n 时，实际地址变化为：地址 ± n * sizeof(指向的类型)
	cout << "利用指针访问第二个元素：" << *pn << endl;
	cout << pn << endl;
	
	//指针和函数
	//1 值传递；2 地址传递
	int i = 10, j = 30;
	swap02(&i, &j);
	cout << i << endl;
	cout << j << endl;

	int len = sizeof(arr_1) / sizeof(arr_1[0]);
	bubble(arr_1, len);
	printArry(arr_1, len);
	cout << arr_1 << endl;


	

	system("pause");
	return 0;

}
	