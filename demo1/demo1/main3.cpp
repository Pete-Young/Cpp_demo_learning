#include <iostream>
using namespace std;
#define changliang 1
#include <string>

int m()
{
	int a = 3;
	cout << "a = " << a << endl;
	//常量
	//类型
	const int changliang2 = 3;
	short num1 = 10;
	int num2 = 2;
	long num3 = 3;
	long long num4 = 4;
	
	cout << "short占用长度" << sizeof(num1) << endl;
    cout << "int占用长度" << sizeof(num2) << endl;
	cout << "long占用长度" << sizeof(num3) << endl;
	cout << "long long占用长度" << sizeof(num4) << endl;
	// 实型 浮点型float 4 7   double 8  15-16
	float f1 = 3.14f;
	cout << "f1=" << f1 << endl;
	// double d1 =0 ;
	//科学计数法
	float f2 = 3e2; // 3*10 ^ 2;
	float f3 = 3e-2; // 3*0.1 ^2;
	// 字符型  占用1字节   实际上将ASCII码进行存储。note:创建时候用单引号，只能有一个字母

	char ch = 'a';
	cout << ch << endl;
	cout << "字符型变量占内存空间" << sizeof(char) << endl;
	//查看ASCLII编码  97 65
	cout << (int)ch << endl;
	// 转义字符：  换行符 
	cout << "hello\n";
	//反斜杠，用于输出一个斜杠
	cout << "\\" << endl;
	//水平制表符 占8个位置  用于整齐的输出数据
	cout << "aa\tHello" << endl;
	cout << "aaaaa\tHello" << endl;
	cout << "\tHello" << endl;
	// 字符串型
	//C风格字符串 note: char字符串名   ；等号后要用双引号包含
	char str[] = "hello, world";
	cout << str << endl;
	//C++风格
	string str2 = "hello,world";
	cout << str2 << endl;
	//布尔类型 true false 占用一个字节大小
	bool flag = true;
	cout << flag << endl;

	/*int aaa;
	cout << "请给变量赋值：" << endl;
	cin >> aaa;
	cout << "输出整型变量" << aaa << endl;
	*/
	//算数运算符
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 / b1 << endl;  // 整数相除还是整数，去掉小数

	double d1 = 0.25;
	double d2 = 0.22;
	cout << d1 / d2 << endl; //小数整除结果可以是小数  结果1.13636
	// 取模运算  小数不可以进行取模 
	// 递增递减运算
	int aa = 10;
	++aa;
	cout << aa << endl;
	// 前置递增先让变量+1再运算
	// 后置递增先进行表达式运算，后+1；
	int a3 = 10;
	cout << "a3 = " << a3 << endl;
	int b2 = ++a3 * 10;
	cout << "++a3 * 10= " << b2 << endl;
	cout << "a3 = " << a3 << endl;
	a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3++ * 10 = " << b3 << endl;
	cout << "a3 = " << a3 << endl;
	// 比较运算符：输出0，1
	// 逻辑运算符 非！；与&&；或||；
	int a4 = 10;
	cout << !a4 << endl;  //0
	cout << !!a4 << endl;  //1
	//逻辑与
	int i = 10;
	int j = 10;
	cout << (i && j) << endl; //1
	//逻辑或
	int i1 = 0;
	int j1 = 0;
	cout << (i || j) << endl; //1
	cout << (i1 || j1) << endl;  //0




	system("pause");
	return 0;
}

//yier
/*yige explaination*/
// 变量 方便管理内存空间

