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
