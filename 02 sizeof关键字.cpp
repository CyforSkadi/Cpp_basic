#include<iostream>
using namespace std;

int main2() {

	//�﷨��sizeof(�������ͻ������

	short num1 = 10;
	cout << "shortռ�õ��ڴ�ռ�Ϊ" << sizeof(short) << endl;

	int num2 = 10;
	cout << "intռ�õ��ڴ�ռ�Ϊ" << sizeof(int) << endl;

	long num3 = 10;
	cout << "longռ�õ��ڴ�ռ�Ϊ" << sizeof(long) << endl;

	long long num4 = 10;
	cout << "long longռ�õ��ڴ�ռ�Ϊ" << sizeof(long long) << endl;
	
	//�Ƚϣ�short<int<=long<=long long 
	system("pause");
	return 0;
}