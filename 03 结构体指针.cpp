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



int main3()
{
	//�����ṹ�����
	student s = { "����",18,100 };

	//ͨ��ָ��ָ��ṹ�����
	student *p = &s;

	//ͨ��ָ����ʽṹ������е����ݡ�->��
	cout << "������ " << p->name << " ���䣺 " << p->age << " ������ " << p->score << endl;

	system("pause");
	return 0;
}