#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

// C++�������ԣ���װ���̳У���̬��
// C++��Ϊ���������Ϊ���󣬶������������Ժ���Ϊ

// ������ͬ���ʵĶ�����Գ����Ϊ��
// ��װ

// ���һ��԰�࣬���ܳ�

const double PI = 3.14;
class Circle
{
	// ����Ȩ��----------------1
public: // ����Ȩ��
	// ����--------------2
	int m_r;
	// ��Ϊ--------------3
	// ��ȡ԰���ܳ���
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	// ͨ��Գ�ഴ��һ�������Բ
	// ʵ���� ��ͨ��һ���ഴ��һ������ ��
	Circle c1;
	c1.m_r = 10;
	cout << "Բ���ܳ���" << c1.calculateZC() << endl;

	system("pause");
	return 0;
}