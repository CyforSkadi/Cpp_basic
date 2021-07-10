#include<iostream>
using namespace std;

//常量定义方式
//1、#define 宏常量
//2、const修饰的变量

#define Day 7

int main() {
	//Day = 14;//错误，Day为常量一旦修改就会报错
	cout << "一周总共有" << Day << "天" << endl;

	const int month = 12;
	//month = 24;//错误，const修饰的变量也是常量
	cout << "一年总共有" << month << "月份" << endl;

	system("pause");

	return 0;

}