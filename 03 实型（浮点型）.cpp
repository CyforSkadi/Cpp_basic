#include<iostream>
using namespace std;

int main3() {
	//������ float
	//˫���� double
	//Ĭ����������С�����Ϊ6λ
	
	float f1 = 3.1415926f;
	cout << "f1=" << f1 << endl;

	double d1 = 3.1415926;
	cout << "d1=" << d1 << endl;

	cout << "floatռ�ÿռ�Ϊ" <<sizeof(float) << endl;
	cout << "doubleռ�ÿռ�Ϊ" << sizeof(double) << endl;

	//��ѧ������
	float f2 = 3e2;//3*10^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;//3*0.1^2
	cout << "f3=" << f3 << endl;

	system("pause");
	return 0;
}