#include<iostream>
using namespace std;

int main3() {

	//�û������������������600����Ϊ����һ����ѧ
	//����500����Ϊ���϶�����ѧ
	//����400����Ϊ����������ѧ
	//С�ڵ���400����Ϊδ���ϱ���

	int score = 0;
	cout << "�����������" << endl;
	cin >> score;
	cout << "������ķ���Ϊ��" << score << endl;

	if (score > 600)//if�������治Ҫ�ӷֺ�
	{
		cout << "��ϲ������һ����ѧ" << endl;
	}
	else if (score > 500)
	{
		cout << "��ϲ�����϶�����ѧ" << endl;
	}
	else if (score > 400)
	{
		cout << "��ϲ������������ѧ" << endl;
	}
	else
	{
		cout << "δ���ϱ���" << endl;
	}

	system("pause");

	return 0;
}