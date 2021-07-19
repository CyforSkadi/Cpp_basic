#include<iostream>
using namespace std;

int main5()
{	
	int a = 10;
	int b = 10;
	
	//1、const修饰指针 常量指针
	//指针指向的值不能改，指针指向可以改
	const int *p = &a;
	//*p = 20;错误
	p = &b;

	//2、const修饰常量 指针常量
	//指针指向不能改，指针指向的值不能改
	int * const p2 = &a;
	*p2 = 100;
	//p2 = &b;错误

	//3、const修饰指针和常量
	//指针指向和指针指向的值都不能改
	const int * const p3 = &a;
	//*p3 = 100;错误
	//p3 = &b;错误

	system("pause");

	return 0;
}