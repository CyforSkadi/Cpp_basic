#include<iostream>
using namespace std;

int main4()
{

	int arr[5] = { 1,3,2,5,4 };
	cout << "数组逆置前：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	int start = 0;//起始下标
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//结束下标
	int temp = 0;

	while (start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;//元素互换
		start++;
		end--;//下标更新
	}

	cout << "数组逆置后：" << endl;
	for (int j = 0; j < 5; j++)
	{
		cout << arr[j] << endl;
	}

	system("pause");

	return 0;
}