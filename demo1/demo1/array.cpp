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
// ð��������
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
	// һά���鶨�壺3�ַ���
	arr[0] = 10;
	int arr2[5] = { 10,20,30,40,50 };
	cout << "����[0]��" << arr2[1] << endl; 
	//��������;  1.ͳ�Ƴ��ȣ�2.��ȡ�ڴ��׵�ַ
	cout << "��������ռ�ÿռ�=" << sizeof(arr2) << endl;
	cout << "ÿ��Ԫ��ռ�ÿռ�=" << sizeof(arr2[0]) << endl;
	cout << "������Ԫ�ظ���Ϊ=" << sizeof(arr2) / sizeof(arr2[1]) << endl;
	// 2.��ȡ�׵�ַ
	//cout << "\t�����׵�ַΪ��" << (int)arr2 << endl;
	//cout << "\t�����е�һ��Ԫ�ص�ַ��" << (int) & arr2[0] << endl;
	//cout << "\t�����еڶ���Ԫ�ص�ַ��" << (int) &arr2[1] << endl;
	//��4���ֽ�
	//�������ǳ��������ɸ�ֵ

	//��ά������4�ֶ��巽ʽ
	// int arr3[2][3];
	int arr4[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	int arr5[2][3] = { 1,2,3,4,5,6 };
	int arr6[][3] = { 1,2,3,4,5,6 };
	//��ά����������;
	//ֵ����
	//���������践��ֵ��������ʱ�����дvoid
	//ֵ����ʱ���βθı䲻Ӱ��ʵ��

	//����������ʽ
	//������������д��Σ�����ֻ��дһ�Σ�
	int c = 10;
	int b = 23;
	swap(c, b);

	//ָ��
	//����ָ��
	int a = 10;
	int* p;
	//��ָ���¼����a�ĵ�ַ
	p = &a;
	cout << "a�ĵ�ַ�ǣ�" << &a << endl;
	cout << "ָ��pΪ��" << p << endl;
	//ʹ��ָ��
	//����ʹ�ý����÷�ʽ���ҵ�ָ��ָ����ڴ�
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*pΪ��" << *p << endl;

	//ָ����ռ�ڴ�ռ�
	//��32λ����ϵͳ��ռ��4���ֽڣ�����ʲô����
	//64λ��ռ��8���ֽ�
	int* pi = &a;

	cout << "sizeof(p) = " << sizeof(p) << endl;
	cout << "sizeof(int *) = " << sizeof(int *) << endl;
	
	//ָ���ڴ��б��λ0�Ŀռ��ָ�룺��ָ��
	//���ڳ�ʼ��ָ�����
	int* p1 = NULL;
	// *p1 = 100;
	//��ָ�벻�ܽ��з���

	//Ұָ�룺ָ�����ָ��Ƿ���,�������Ұָ��
	//int* p2 = (int*)0x1100;
	//cout << *p2 << endl;
	//const����ָ�룺����ָ�� const int* p = &a;
	//ָ���ָ����Ըı䣬��ָ���ֵ�����Ըı䣻

	//const���γ�����ָ�볣�� int*const p = &a;
	//ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ըı䣻

	//const������ָ�������γ��� const int * const p = &a;
	//���������޸ģ� 

	//ָ�������
	int arr_1[10] = { 1,3,2,4,5,6,8,7,9,10 };
	cout << "��һ��Ԫ��Ϊ��" << arr_1[0] << endl;
	int* pn = arr_1;//�����׵�ַ
	cout << "����ָ����ʵ�һ��Ԫ�أ�" << *pn << endl;
	cout << pn << endl;
	pn+=1; 
	//ָ��Ӽ����� n ʱ��ʵ�ʵ�ַ�仯Ϊ����ַ �� n * sizeof(ָ�������)
	cout << "����ָ����ʵڶ���Ԫ�أ�" << *pn << endl;
	cout << pn << endl;
	
	//ָ��ͺ���
	//1 ֵ���ݣ�2 ��ַ����
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
	