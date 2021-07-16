#include<iostream>
using namespace std;

int main2()
{

	//1、可以通过数组名称统计整个数组占用内存大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组占用内存空间为：" << sizeof(arr) << endl;
	cout << "每个元素占用内存空间为：" << sizeof(arr[0]) << endl;
	cout << "数组中元素的个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2、可以通过数组名查看数组首地址
	cout << "数组的首地址为：" << (int)arr << endl;
	cout << "数组第一个元素的地址为：" << (int)&arr[0] << endl;
	cout << "数组第二个元素的地址为：" << (int)&arr[1] << endl;

	system("pause");

	return 0;
}