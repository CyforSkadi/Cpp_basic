#include<iostream>
using namespace std;

int main4() {
	//�ַ��ʹ�����ʽ
	char ch = 'a';
	cout << ch << endl;

	//�ַ�����ռ�ڴ��С
	cout << "�ַ��ͱ�����ռ�ڴ�Ϊ" << sizeof(char) << endl;

	//��������
	//char ch2 = "b";//Ҫ�õ�����
	//char ch3 = 'wdad';//��������ֻ����һ���ַ�

	//�ַ��ͱ�����Ӧ��ASCII��
	cout << (int)ch << endl;
	//a-97 A-65

	system("pause");

	return 0;
}
