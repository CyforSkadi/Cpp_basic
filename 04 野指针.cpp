#include<iostream>
using namespace std;

int main4()
{
	//野指针：指针变量指向非法的内存空间
	//程序中尽量避免野指针的出现

	int *p = (int *)0x1100;

	cout << *p << endl;

	system("pause");

	return 0;
}