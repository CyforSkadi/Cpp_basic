#include<iostream>
using namespace std;

int main3()
{
	//空指针：指针变量指向内存中编号为0的空间

	//1、空指针用于给指针变量进行初始化
	int *p = NULL;

	//2、空指针是不可以进行访问的
	//0~255内存编号为系统占用，不可以访问
	//*p = 100;

	system("pause");

	return 0;
}