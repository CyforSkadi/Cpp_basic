#include<iostream>
using namespace std;

int main1()
{
	//ÿһλ����3�η�֮�͵������������Ϊˮ�ɻ���

	int num = 100;

	do
	{
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10;//��ȡ��λ
		b = num / 10 % 10;//��ȡʮλ
		c = num / 100;//��ȡ��λ

		if (num == a * a*a + b * b*b + c * c*c)
		{
			cout << num << endl;
		}
		num++;

	} while (num < 1000);

	system("pause");

	return 0;
}