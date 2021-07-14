#include<iostream>
using namespace std;

int main6() {

	//创建三个变量abc，将ab中大的值赋值给c
	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);

	cout << "c = " << c << endl;

	//C++中三目运算符返回的是变量可以继续赋值
	(a > b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}