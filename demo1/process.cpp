#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "exchange.h"
int process()
{
	// ���и�ʽif���
	int  score = 0;
	//cout << "������һ������" << endl;
	//cin >> score;

	cout << "������ķ���Ϊ��" << score << endl;
	if (score > 600)
	{
		cout << "congratulations!" << endl;
	}
	else
	{
		cout << "What a pity!" << endl;
	}

	// ��Ŀ����� ,���ر��������Լ�����ֵ
	int a = 10,b =20,c = 0;
	c = (a > b ? a : b);
	(a < b ? a : b) = 100;
	//switch��䣬ע���break

	//cout << "score for movie: " << endl;
	//cin >> score;
	cout << "score:" << score << endl;
	switch (score)
	{
	case 10:
		cout << "�����Ӱ" << endl;
		break;
	case 9:
		cout << "�����Ӱ9" << endl;
		break;
	case 8:
		cout << "�ǳ��õ�Ӱ8" << endl;
		break;
	case 7:
		cout << "��Ӱһ��7" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
		break;
	}
	int num = 0;
	//if��switch����
	// switch �ж�ʱ��ֻ�������ͻ��ַ��ͣ���������һ������
	//ѭ���ṹ
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
	//note: do-while ��ִ��һ��ѭ��������ж�����
	// ѭ��Ƕ��ѭ��
	//break����  continue������һ��ѭ��
	// goto��䣺goto ���
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
