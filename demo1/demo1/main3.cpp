#include <iostream>
using namespace std;
#define changliang 1
#include <string>

int main()
{
	int a = 3;
	cout << "a = " << a << endl;
	//����
	//����
	const int changliang2 = 3;
	short num1 = 10;
	int num2 = 2;
	long num3 = 3;
	long long num4 = 4;
	
	cout << "shortռ�ó���" << sizeof(num1) << endl;
    cout << "intռ�ó���" << sizeof(num2) << endl;
	cout << "longռ�ó���" << sizeof(num3) << endl;
	cout << "long longռ�ó���" << sizeof(num4) << endl;
	// ʵ�� ������float 4 7   double 8  15-16
	float f1 = 3.14f;
	cout << "f1=" << f1 << endl;
	double d1 =0 ;
	//��ѧ������
	float f2 = 3e2; // 3*10 ^ 2;
	float f3 = 3e-2; // 3*0.1 ^2;
	// �ַ���  ռ��1�ֽ�   ʵ���Ͻ�ASCII����д洢��note:����ʱ���õ����ţ�ֻ����һ����ĸ

	char ch = 'a';
	cout << ch << endl;
	cout << "�ַ��ͱ���ռ�ڴ�ռ�" << sizeof(char) << endl;
	//�鿴ASCLII����  97 65
	cout << (int)ch << endl;
	// ת���ַ���  ���з� 
	cout << "hello\n";
	//��б�ܣ��������һ��б��
	cout << "\\" << endl;
	//ˮƽ�Ʊ�� ռ8��λ��  ����������������
	cout << "aa\tHello" << endl;
	cout << "aaaaa\tHello" << endl;
	cout << "\tHello" << endl;
	// �ַ�����
	//C����ַ��� note: char�ַ�����   ���Ⱥź�Ҫ��˫���Ű���
	char str[] = "hello, world";
	cout << str << endl;
	//C++���
	string str2 = "hello,world";
	cout << str2 << endl;
	//�������� true false ռ��һ���ֽڴ�С
	bool flag = true;
	cout << flag << endl;

	int aaa;
	cout << "���������ֵ��" << endl;
	cin >> aaa;
	cout << "������ͱ���" << aaa << endl;

	system("pause");
	return 0;
}

//yier
/*yige explaination*/
// ���� ��������ڴ�ռ�

