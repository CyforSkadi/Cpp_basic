#include<iostream>
using namespace std;

int main2() {

	//�û������������������600����Ϊ����һ����ѧ������δ����

	int score = 0;
	cout << "�����������" << endl;
	cin >> score;
	cout << "������ķ���Ϊ��" << score << endl;

	if (score > 600)//if�������治Ҫ�ӷֺ�
	{
		cout << "��ϲ������һ����ѧ" << endl;
	}
	else
	{
		cout << "��δ����һ����ѧ" << endl;
	}

	system("pause");

	return 0;
}