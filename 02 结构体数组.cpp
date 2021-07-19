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



int main2()
{
	//创建结构体数组
	student stuArray[3] =
	{
		{"张三",18,100},
		{"李四",19,80},
		{"王五",20,60}
	};
	//给结构体数组中元素赋值
	stuArray[2].name = "赵六";
	stuArray[2].age = 22;
	stuArray[2].score = 79;
	//遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名： " << stuArray[i].name << " 年龄： " << stuArray[i].age << " 分数： " << stuArray[i].score << endl;
	}

	system("pause");
	return 0;
}