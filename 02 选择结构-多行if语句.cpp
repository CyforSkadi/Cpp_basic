#include<iostream>
using namespace std;

int main2() {

	//用户输入分数，分数大于600，视为考上一本大学，否则未考上

	int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;

	if (score > 600)//if条件后面不要加分号
	{
		cout << "恭喜您考上一本大学" << endl;
	}
	else
	{
		cout << "您未考上一本大学" << endl;
	}

	system("pause");

	return 0;
}