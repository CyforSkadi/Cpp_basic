#include<iostream>
using namespace std;

int main4() {

	//�û������������������600����Ϊ����һ����ѧ
	//����500����Ϊ���϶�����ѧ
	//����400����Ϊ����������ѧ
	//С�ڵ���400����Ϊδ���ϱ���
	//һ�������У�����700Ϊ���󣬴���650Ϊ�廪������600Ϊ�˴�

	int score = 0;
	cout << "�����������" << endl;
	cin >> score;
	cout << "������ķ���Ϊ��" << score << endl;

	if (score > 600)//if�������治Ҫ�ӷֺ�
	{
		cout << "��ϲ������һ����ѧ" << endl;
		if (score > 700)
		{
			cout << "���ܿ��ϱ���" << endl;
		}
		else if (score > 650)
		{
			cout << "���ܿ����廪" << endl;
		}
		else
		{
			cout << "���ܿ����˴�" << endl;
		}
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