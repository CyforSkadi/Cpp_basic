#include<iostream>
using namespace std;

int main3() {
	//单精度 float
	//双精度 double
	//默认情况下输出小数最多为6位
	
	float f1 = 3.1415926f;
	cout << "f1=" << f1 << endl;

	double d1 = 3.1415926;
	cout << "d1=" << d1 << endl;

	cout << "float占用空间为" <<sizeof(float) << endl;
	cout << "double占用空间为" << sizeof(double) << endl;

	//科学计数法
	float f2 = 3e2;//3*10^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;//3*0.1^2
	cout << "f3=" << f3 << endl;

	system("pause");
	return 0;
}