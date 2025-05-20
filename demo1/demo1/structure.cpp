#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#	include <string.h>
// 结构体属于用户自定义的数据类型
// struct 结构体名  {结构体成员列表}；
// 3中创建方式
// 
// 1.创建学生数据类型
// 自定义数据类型：一些类型集合组成的一个类型
struct Student
{
	//成员列表
	string name;
	int age;
	int score;
}s3;
//2. 通过学生类型创建 具体学生
//2.1 struct Student s1
//2.2 struct Student s2 = { ... }
//2,3 在定义结构体时顺便创建结构体变量

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

// 打印学生信息的方法
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
	// s->age = 10; 加入const 之后，一旦有修改就会报错，可以防止误操作；
	cout << s->age << s->name << s->score << endl;
}





int main_structure() 
{
	//2.1  struct关键字可以省略
	// struct Student s1;
	Student s1;
	// 给S1赋值，通过 . 访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;

	cout << "姓名：" << s1.name << "年龄：" << s1.age << "成绩：" << s1.score << endl;
	//2.2
	struct Student s2 = {
		"李四",
		19,
		80
	};
	cout << "姓名：" << s2.name << "年龄：" << s2.age << "成绩：" << s2.score << endl;
	// 2,3
	//在结构体最后创建s3变量
	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	cout << "姓名：" << s3.name << "年龄：" << s3.age << "成绩：" << s3.score << endl;
	
	//结构体数组
	// 将自定义的结构体放入到数组中方便维护
	// 定义结构体  创建结构体数组  给结构体数组中的元素赋值  便利结构体数组
	struct Student stuArray[3] =
	{
		{"张三", 18, 100},
		{"李四", 28, 99},
		{"王武", 34, 88}
	};
	stuArray[2].name = "赵六";
	stuArray[2].age = 80;
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		cout << "姓名：" << stuArray[i].name 
			<< "年龄：" << stuArray[i].age 
			<< "成绩：" << stuArray[i].score << endl;
	}
	// 结构体指针
	// 1创建学生结构体变量
	// struct Student s = { "张三",18,100 };
	Student s = { "张三",18,100 };
	// 2通过指针指向结构体变量
	// struct Student * p = &s;
	Student* p = &s;
	// 3通过指针访问结构体变量中的数据
	// 通过结构体指针访问结构体中的属性，需要利用" ->";
	cout << endl << endl;
	cout << "姓名：" << p->name
		<< "年龄：" << p->age
		<< "分数：" << p->score << endl;
	
	// 结构体嵌套结构体
	teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;
	cout << t.name << t.id << t.age << t.stu.name << t.stu.score << endl;
	 // 结构体做函数参数
	// 值传递  地址传递
	// 将学生传入到一个参数中，打印学生的所有信息
	printStudent1(s);   // 值传递
	printStudent2(&s);   // 地址传递
	printStudent1(s);

	// 结构体中const使用场景
	 // 值传递复制值，占用空间大
	// 将函数中形参改为指针，可以减少内存时间，而且不会赋值出新的副本
	return 0;






}