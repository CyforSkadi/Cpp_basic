#include<iostream>
using namespace std;

//比较函数，实现两个整形数字比较，返回较大的值
//声明
//声明可以写多次，定义只能写一次
int max(int a, int b);

int main5()
{
	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;

	system("pause");

	return 0;
}

//定义
int max(int a, int b)
{
	return a > b ? a : b;
}