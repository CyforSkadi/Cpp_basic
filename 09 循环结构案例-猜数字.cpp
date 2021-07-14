#include<iostream>
using namespace std;
#include<ctime>//time系统时间头文件

int main9()
{
	//添加随机数种子，利用当前系统时间生成随机数
	srand((unsigned int)time(NULL));

	int num = rand() % 100 + 1;//rand()%100生成0~99的随机数

	int val = 0;
	
	while (1)
	{
		cin >> val;
		if (val > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (val < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "猜对了" << endl;
			break;
		}
	}
	return 0;
}