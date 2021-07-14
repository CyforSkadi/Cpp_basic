#include<iostream>
using namespace std;

int main1()
{
	//每一位数的3次方之和等于它本身的数为水仙花数

	int num = 100;

	do
	{
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10;//获取个位
		b = num / 10 % 10;//获取十位
		c = num / 100;//获取百位

		if (num == a * a*a + b * b*b + c * c*c)
		{
			cout << num << endl;
		}
		num++;

	} while (num < 1000);

	system("pause");

	return 0;
}