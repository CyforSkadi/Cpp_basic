#include<iostream>
using namespace std;
#include<string>


struct student
{
	//��Ա�б�
	//����
	string name;
	//����
	int age;
	//���Է���
	int score;

};



int main2()
{
	//�����ṹ������
	student stuArray[3] =
	{
		{"����",18,100},
		{"����",19,80},
		{"����",20,60}
	};
	//���ṹ��������Ԫ�ظ�ֵ
	stuArray[2].name = "����";
	stuArray[2].age = 22;
	stuArray[2].score = 79;
	//�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "������ " << stuArray[i].name << " ���䣺 " << stuArray[i].age << " ������ " << stuArray[i].score << endl;
	}

	system("pause");
	return 0;
}