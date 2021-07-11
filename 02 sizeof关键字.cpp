#include<iostream>
using namespace std;

int main2() {

	//语法：sizeof(数据类型或变量）

	short num1 = 10;
	cout << "short占用的内存空间为" << sizeof(short) << endl;

	int num2 = 10;
	cout << "int占用的内存空间为" << sizeof(int) << endl;

	long num3 = 10;
	cout << "long占用的内存空间为" << sizeof(long) << endl;

	long long num4 = 10;
	cout << "long long占用的内存空间为" << sizeof(long long) << endl;
	
	//比较：short<int<=long<=long long 
	system("pause");
	return 0;
}