#include<iostream>
using namespace std;

int main1() {
	
	//�û������������������600����Ϊ����һ����ѧ

	int score = 0;
	cout << "�����������" << endl;
	cin >> score;
	cout << "������ķ���Ϊ��" << score << endl;

	if (score > 600)//if�������治Ҫ�ӷֺ�
	{
		cout << "��ϲ������һ����ѧ" << endl;
	}

	system("pause");

	return 0;
}