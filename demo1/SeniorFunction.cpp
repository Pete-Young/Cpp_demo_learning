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
// int func2(int a = 10, int b = 20);
int func2(int a = 10, int b = 20)
{
	return a + b;
}
int sf_main()
{
	cout << func(10) << endl;


	system("pause");
	return 0;
}
