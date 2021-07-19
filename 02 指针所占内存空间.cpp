#include<iostream>
using namespace std;

int main2()
{
	//指针所占内存空间大小
	//32位操作系统指针均占4个字节，64位为8个字节

	int a = 10;
	int *p = &a;
	cout << "sizeof (int*) = " << sizeof(int *) << endl;
	cout << "sizeof (float*) = " << sizeof(float *) << endl;
	cout << "sizeof (double*) = " << sizeof(double *) << endl;
	cout << "sizeof (char*) = " << sizeof(char *) << endl;

	system("pause");

	return 0;
}