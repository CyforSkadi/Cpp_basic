#include<iostream>
using namespace std;
#include<string>


struct student
{
	//成员列表
	//姓名
	string name;
	//年龄
	int age;
	//考试分数
	int score;

};

struct teacher
{
	//教师编号
	int id;
	//教师姓名
	string name;
	//教师年龄
	int age;
	//辅导的学生
	student stu;
};


int main4()
{
	teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 18;
	t.stu.score = 60;

	cout << "老师姓名为：" << t.name << " 老师编号：" << t.id << " 老师年龄：" << t.age << " 老师辅导的学生姓名：" << t.stu.name
		<< " 学生年龄：" << t.stu.age << " 学生成绩：" << t.stu.score << endl;


	system("pause");
	return 0;
}