#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#	include <string.h>
// �ṹ�������û��Զ������������
// struct �ṹ����  {�ṹ���Ա�б�}��
// 3�д�����ʽ
// 
// 1.����ѧ����������
// �Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
struct Student
{
	//��Ա�б�
	string name;
	int age;
	int score;
}s3;
//2. ͨ��ѧ�����ʹ��� ����ѧ��
//2.1 struct Student s1
//2.2 struct Student s2 = { ... }
//2,3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����

struct student
{
	string name;
	int age;
	int score;
};
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
};

// ��ӡѧ����Ϣ�ķ���
void printStudent1(Student s)
{
	cout << "printstudent1" << endl;
	cout << s.name << s.age << s.score << endl;
}
void printStudent2(Student* p)
{
	cout << "printstudent2" << endl;
	p->age = 800;
	cout << p->age << p->name << p->score << endl;
}

void prStu(const student* s)
{
	// s->age = 10; ����const ֮��һ�����޸ľͻᱨ�����Է�ֹ�������
	cout << s->age << s->name << s->score << endl;
}





int main_structure() 
{
	//2.1  struct�ؼ��ֿ���ʡ��
	// struct Student s1;
	Student s1;
	// ��S1��ֵ��ͨ�� . ���ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;

	cout << "������" << s1.name << "���䣺" << s1.age << "�ɼ���" << s1.score << endl;
	//2.2
	struct Student s2 = {
		"����",
		19,
		80
	};
	cout << "������" << s2.name << "���䣺" << s2.age << "�ɼ���" << s2.score << endl;
	// 2,3
	//�ڽṹ����󴴽�s3����
	s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	cout << "������" << s3.name << "���䣺" << s3.age << "�ɼ���" << s3.score << endl;
	
	//�ṹ������
	// ���Զ���Ľṹ����뵽�����з���ά��
	// ����ṹ��  �����ṹ������  ���ṹ�������е�Ԫ�ظ�ֵ  �����ṹ������
	struct Student stuArray[3] =
	{
		{"����", 18, 100},
		{"����", 28, 99},
		{"����", 34, 88}
	};
	stuArray[2].name = "����";
	stuArray[2].age = 80;
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		cout << "������" << stuArray[i].name 
			<< "���䣺" << stuArray[i].age 
			<< "�ɼ���" << stuArray[i].score << endl;
	}
	// �ṹ��ָ��
	// 1����ѧ���ṹ�����
	// struct Student s = { "����",18,100 };
	Student s = { "����",18,100 };
	// 2ͨ��ָ��ָ��ṹ�����
	// struct Student * p = &s;
	Student* p = &s;
	// 3ͨ��ָ����ʽṹ������е�����
	// ͨ���ṹ��ָ����ʽṹ���е����ԣ���Ҫ����" ->";
	cout << endl << endl;
	cout << "������" << p->name
		<< "���䣺" << p->age
		<< "������" << p->score << endl;
	
	// �ṹ��Ƕ�׽ṹ��
	teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;
	cout << t.name << t.id << t.age << t.stu.name << t.stu.score << endl;
	 // �ṹ������������
	// ֵ����  ��ַ����
	// ��ѧ�����뵽һ�������У���ӡѧ����������Ϣ
	printStudent1(s);   // ֵ����
	printStudent2(&s);   // ��ַ����
	printStudent1(s);

	// �ṹ����constʹ�ó���
	 // ֵ���ݸ���ֵ��ռ�ÿռ��
	// ���������βθ�Ϊָ�룬���Լ����ڴ�ʱ�䣬���Ҳ��ḳֵ���µĸ���
	return 0;






}