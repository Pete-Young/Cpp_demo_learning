#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "exchange.h"
int process()
{
	// 多行格式if语句
	int  score = 0;
	//cout << "请输入一个分数" << endl;
	//cin >> score;

	cout << "您输入的分数为：" << score << endl;
	if (score > 600)
	{
		cout << "congratulations!" << endl;
	}
	else
	{
		cout << "What a pity!" << endl;
	}

	// 三目运算符 ,返回变量，可以继续赋值
	int a = 10,b =20,c = 0;
	c = (a > b ? a : b);
	(a < b ? a : b) = 100;
	//switch语句，注意加break

	//cout << "score for movie: " << endl;
	//cin >> score;
	cout << "score:" << score << endl;
	switch (score)
	{
	case 10:
		cout << "经典电影" << endl;
		break;
	case 9:
		cout << "经典电影9" << endl;
		break;
	case 8:
		cout << "非常好电影8" << endl;
		break;
	case 7:
		cout << "电影一般7" << endl;
		break;
	default:
		cout << "烂片" << endl;
		break;
	}
	int num = 0;
	//if和switch区别？
	// switch 判断时候只能是整型或字符型，不可以是一个区间
	//循环结构
	while (num < 10)
	{
		num++;
		cout << "num = " << num  << endl;
	}

	num = 0;
	do
	{    
		cout << num << endl;
		num++;
	} while (num<10);
	//note: do-while 先执行一次循环语句再判断条件
	// 循环嵌套循环
	//break跳出  continue跳到下一次循环
	// goto语句：goto 标记
	cout << "1xxx" << endl;
	cout << "2xxx" << endl;
	goto FLAG;
	cout << "3xxx" << endl;
	cout << "4xxx" << endl;
FLAG:
	cout << "5xxx" << endl;




	system("pause");
	return 0;

}
