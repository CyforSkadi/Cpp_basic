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
//将函数中的形参改为指针，可以减少内存空间，且不会复制新的副本
void printstudent(const student *s)
{
	//s->age = 150;//加入const后一旦修改就会报错，可以防止误操作
	cout<< "姓名：" << s->name << " 年龄：" << s->age << " 成绩：" << s->score << endl;
}

int main6()
{
	student s = { "张三",15,70 };

	printstudent(&s);
	cout << "main中张三的年龄：" << s.age << endl;

	system("pause");
	return 0;
}