#include<iostream>
using namespace std;

int main5()
{
	int arr[] = { 4,2,8,0,5,7,1,3,9 };

	cout << "排序前：" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//开始冒泡排序
	for (int i = 0; i < 9 - 1; i++)//总共排序次数为 元素个数-1
	{
		for (int j = 0; j < 9 - i - 1; j++)//内层循环对比次数为 元素个数-当前轮数-1
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	cout << "排序后：" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");

	return 0;
}