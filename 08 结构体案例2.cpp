#include<iostream>
using namespace std;
#include<string>
#include<ctime>

//���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�; �����ṹ�����飬�����д��5��Ӣ�ۡ�
//
//ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����
//
//����Ӣ����Ϣ���£�
//
//{ "����",23,"��" },
//{ "����",22,"��" },
//{ "�ŷ�",20,"��" },
//{ "����",21,"��" },
//{ "����",19,"Ů" },



//����Ӣ�۵Ľṹ��
struct Hero
{
	string name;
	int age;
	string sex;
};

//ð������
void bubbleSort(Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

//��ӡ���������Ӣ����Ϣ
void printHero(Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << " ���䣺" << heroArray[i].age << " �Ա�" << heroArray[i].sex << endl;
	}
}


int main() {

	//��������������Ӣ��
	Hero heroArray[5] =
	{
		{ "����",23,"��" },
		{ "����",22,"��" },
		{ "�ŷ�",20,"��" },
		{ "����",21,"��" },
		{ "����",19,"Ů" },
	};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);

	cout << "����ǰ��ӡ��" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << " ���䣺" << heroArray[i].age << " �Ա�" << heroArray[i].sex << endl;
	}

	//�������������
	bubbleSort(heroArray,len);
	//�������Ľ�����д�ӡ���
	cout << "������ӡ��" << endl;
	printHero(heroArray, len);

	system("pause");

	return 0;
}