#include<iostream>
using namespace std;

int main3() {

	//ǰ�õ���
	int a = 10;
	++a;
	cout << "a = " << a << endl;

	//���õ���
	int b = 10;
	b++;
	cout << "b = " << b << endl;

	//ǰ�úͺ��õ�����:
	//ǰ�� ���ñ���+1 �ٽ�������
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;

	//���� �Ƚ������� ���ñ���+1
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3 = " << a3 << endl;
	cout << "b3 = " << b3 << endl;

	system("pause");

	return 0;
}