#include<iostream>
using namespace std;



int add(int num1, int num2)	//����ӷ�������num1��num2��Ϊ��ʽ�������βΣ�
{
	int sum = num1 + num2;
	return sum;
}

int main2()
{
	//main�����е���add����
	int a = 10;
	int b = 20;
	//���������﷨���������ƣ�������
	//a��b��Ϊʵ�ʲ�����ʵ�Σ�
	int c = add(a, b);
	cout << c << endl;

	system("pause");

	return 0;
}