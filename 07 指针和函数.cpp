#include<iostream>
using namespace std;

//实现两个数字进行交换
void swap1(int a, int b)
	{
		int temp = a;
		a = b;
		b = temp;

		cout << "swap1 a = " << a << endl;
		cout << "swap1 b = " << b << endl;
	}

void swap2(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main7()
{
	//1、值传递
	int a = 10;
	int b = 20;
	//swap1(a, b);

	//2、地址传递
	swap2(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}