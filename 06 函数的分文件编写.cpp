#include<iostream>
using namespace std;
#include "swap.h"

//实现两个数字进行交换的函数

//1、创建后缀名为.h的头文件
//2、创建后缀名为.cpp的源文件
//3、在头文件中写函数的声明
//4、在源文件中写函数的定义

int main()
{
	int a = 100;
	int b = 200;

	swap(a, b);

	system("pause");

	return 0;
}

