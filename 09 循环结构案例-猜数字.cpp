#include<iostream>
using namespace std;
#include<ctime>//timeϵͳʱ��ͷ�ļ�

int main9()
{
	//�����������ӣ����õ�ǰϵͳʱ�����������
	srand((unsigned int)time(NULL));

	int num = rand() % 100 + 1;//rand()%100����0~99�������

	int val = 0;
	
	while (1)
	{
		cin >> val;
		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (val < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "�¶���" << endl;
			break;
		}
	}
	return 0;
}