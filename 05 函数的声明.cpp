#include<iostream>
using namespace std;

//�ȽϺ�����ʵ�������������ֱȽϣ����ؽϴ��ֵ
//����
//��������д��Σ�����ֻ��дһ��
int max(int a, int b);

int main5()
{
	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;

	system("pause");

	return 0;
}

//����
int max(int a, int b)
{
	return a > b ? a : b;
}