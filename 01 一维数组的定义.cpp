#include<iostream>
using namespace std;

int main1() 
{

	/*
		1.数据类型 数组名[数组长度]；
		2.数据类型 数组名[数组长度] = {值1， 值2， ……}；
		3.数据类型 数组名[] = {值1， 值2， ……}；
	*/

	//int arr[5];
	//arr[0] = 10;
	//arr[1] = 20;
	//arr[2] = 30;
	//arr[3] = 40;
	//arr[4] = 50;

	//cout << arr[0] << endl;

	//如果在初始化数据时没有完全填完，会用0来补齐剩余数据
	//int arr2[5] = { 10,20,30,40,50 };
	//利用循环的方式来输出数组中的元素
	/*for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}*/

	int arr3[] = { 90,80,70,60,50,40,30,20,10 };
	for (int i = 0; i < 9; i++)
	{
		cout << arr3[i] << endl;
	}
	system("pause");

	return 0;
}