#include<iostream>
using namespace std;

int main7() {

	//����Ӱ���
	// 9~10 ����
	// 7~8 �ǳ���
	// 5~6 һ��
	// 5���� ��Ƭ

	int score = 0;
	cout << "�����Ӱ��֣�" << endl;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;

	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;//�˳���ǰ��֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 7:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 6:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	case 5:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	default:
		cout << "����Ϊ��Ӱ����Ƭ" << endl;
		break;
	}
	//switchȱ�㣺�ж�ʱֻ�������ͻ����ַ��ͣ�����������

	system("pause");

	return 0;
}