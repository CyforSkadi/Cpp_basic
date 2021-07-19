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
//打印学生信息函数
//1、值传递
void printstudent1(student s)
{
	s.age = 100;//不会修改主函数中的数据
	cout<<"子函数1中打印 姓名：" << s.name << " 年龄：" << s.age << " 成绩：" << s.score << endl;
}
//2、地址传递
void printstudent2(student *p)
{
	p->age = 200;//会修改主函数中的数据
	cout << "子函数2中打印 姓名：" << p->name << " 年龄：" << p->age << " 成绩：" << p->score << endl;
}

int main5()
{
	student s;
	s.name = "张三";
	s.age = 20;
	s.score = 80;

	printstudent1(s);
	printstudent2(&s);
	cout << "main函数中打印 姓名：" << s.name << " 年龄：" << s.age << " 成绩：" << s.score << endl;

	system("pause");
	return 0;
}