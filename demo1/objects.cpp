#define _CRT_SECURE_NO_WARNINGS
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

// ��������
// �������ʱ�����԰����Ժ���Ϊ���ڲ�ͬ��Ȩ���£����Կ���
// ����Ȩ�������֣�
// Public���� ��Ա���ڿ��Է��ʣ�����Ҳ����
//  protected ���� ���ڿ��Է��ʣ����ⲻ���Է���   ���ӿ��Է��ʸ��׵ı�������
// private˽��  ���ڿ��Է��ʣ����ⲻ���Է���   ���Ӳ����Է��ʸ���
//   
class Person
{
public:
	// ����Ȩ��
	string m_name;
protected:
	string m_car;
private:
	int m_Password;
public:
	void func()
	{
		m_name = "����";
		m_car = "������";
		m_Password = 123456;
	}
};

// C++ ��struct ��class������Ĭ�ϵķ���Ȩ�޲�ͬ
// structĬ��Ϊ���У�classĬ��Ϊ˽��
class C1
{
	int m_A;
};
struct C2
{
	int m_A;
};
int main()
{
	Person p1;
	p1.m_name = "����";
	// ����Ȩ�޵�������������ʲ���
	// ˽��Ȩ��������������ʲ���  
	// C1 c11;
	C2 c2;

	// c11.m_A = 10;
	c2. m_A = 10;
	
	// ͨ��Գ�ഴ��һ�������Բ
	// ʵ���� ��ͨ��һ���ഴ��һ������ ��
	Circle c1;
	c1.m_r = 10;
	cout << "Բ���ܳ���" << c1.calculateZC() << endl;


	

	system("pause");
	return 0;
}