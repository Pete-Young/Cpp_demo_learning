#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
// �������
// ����Ĭ�ϲ���

// �������β��б��е��βο�����Ĭ��ֵ
// �β�= Ĭ��ֵ
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}
// note��1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô���λ�����󶼱�����
// 2. �������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
// ������ʵ��ֻ����һ����Ĭ�ϲ���
int func2(int a, int b);

int func2(int a = 10, int b = 20)
{
	return a + b;
}
// ������ռλ���� ������ռλ�����ú���ʱ��������λ��
// Ŀǰ�Ľ׶ε�ռλ�������ò�����������õ�
// ռλ����������Ĭ�ϲ���
void func3(int a, int = 10)
{
	cout << "this is a func" << endl;
}

// ��������
// ���ã� ������������ͬ����߸�����
// ����������1.ͬһ����������
// 2.����������ͬ
// 3.�����������Ͳ�ͬ�������˳��
void f() {
	cout << "func" << endl;
}
void f(int a) {
	cout << "func int a" << endl;
}
void f(int a, double b) {
	cout << "func double a" << endl;
}
 	//note��1. ������Ϊ��������

	// 2. ������������Ĭ�ϲ���
void fun(int& a)
{
	cout << "fun(int &a)����" << endl;
}

void fun(const int& a)
{
	cout << "fun(const int &a)����" << endl;
}
// 2
// д�������ر������Ĭ�ϲ���

int sf_main()
{
	cout << func(10) << endl;
	
	func3(10, 10);
	// ����
	f();
	f(10);

	int a = 10;
	fun(a);  // int &a ����
	fun(10);  // const int ���ã�




	system("pause");
	return 0;
}
