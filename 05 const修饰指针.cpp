#include<iostream>
using namespace std;

int main5()
{	
	int a = 10;
	int b = 10;
	
	//1��const����ָ�� ����ָ��
	//ָ��ָ���ֵ���ܸģ�ָ��ָ����Ը�
	const int *p = &a;
	//*p = 20;����
	p = &b;

	//2��const���γ��� ָ�볣��
	//ָ��ָ���ܸģ�ָ��ָ���ֵ���ܸ�
	int * const p2 = &a;
	*p2 = 100;
	//p2 = &b;����

	//3��const����ָ��ͳ���
	//ָ��ָ���ָ��ָ���ֵ�����ܸ�
	const int * const p3 = &a;
	//*p3 = 100;����
	//p3 = &b;����

	system("pause");

	return 0;
}