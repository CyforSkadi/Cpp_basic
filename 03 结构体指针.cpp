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



int main3()
{
	//创建结构体变量
	student s = { "张三",18,100 };

	//通过指针指向结构体变量
	student *p = &s;

	//通过指针访问结构体变量中的数据“->”
	cout << "姓名： " << p->name << " 年龄： " << p->age << " 分数： " << p->score << endl;

	system("pause");
	return 0;
}