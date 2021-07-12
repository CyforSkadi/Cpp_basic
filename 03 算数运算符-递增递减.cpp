#include<iostream>
using namespace std;

int main3() {

	//前置递增
	int a = 10;
	++a;
	cout << "a = " << a << endl;

	//后置递增
	int b = 10;
	b++;
	cout << "b = " << b << endl;

	//前置和后置的区别:
	//前置 先让变量+1 再进行运算
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;

	//后置 先进行运算 再让变量+1
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3 = " << a3 << endl;
	cout << "b3 = " << b3 << endl;

	system("pause");

	return 0;
}