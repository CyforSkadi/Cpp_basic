#include<iostream>
using namespace std;



int add(int num1, int num2)	//定义加法函数，num1和num2称为形式参数（形参）
{
	int sum = num1 + num2;
	return sum;
}

int main2()
{
	//main函数中调用add函数
	int a = 10;
	int b = 20;
	//函数调用语法：函数名称（参数）
	//a和b称为实际参数（实参）
	int c = add(a, b);
	cout << c << endl;

	system("pause");

	return 0;
}