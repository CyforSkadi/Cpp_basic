#include<iostream>
using namespace std;

int main7() {

	//给电影打分
	// 9~10 经典
	// 7~8 非常好
	// 5~6 一般
	// 5以下 烂片

	int score = 0;
	cout << "请给电影打分：" << endl;
	cin >> score;
	cout << "您打的分数为：" << score << endl;

	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl;
		break;//退出当前分支
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为电影非常好" << endl;
		break;
	case 7:
		cout << "您认为电影非常好" << endl;
		break;
	case 6:
		cout << "您认为电影一般" << endl;
		break;
	case 5:
		cout << "您认为电影一般" << endl;
		break;
	default:
		cout << "您认为电影是烂片" << endl;
		break;
	}
	//switch缺点：判断时只能是整型或者字符型，不能是区间

	system("pause");

	return 0;
}