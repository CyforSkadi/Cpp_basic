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

struct teacher
{
	//��ʦ���
	int id;
	//��ʦ����
	string name;
	//��ʦ����
	int age;
	//������ѧ��
	student stu;
};


int main4()
{
	teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 18;
	t.stu.score = 60;

	cout << "��ʦ����Ϊ��" << t.name << " ��ʦ��ţ�" << t.id << " ��ʦ���䣺" << t.age << " ��ʦ������ѧ��������" << t.stu.name
		<< " ѧ�����䣺" << t.stu.age << " ѧ���ɼ���" << t.stu.score << endl;


	system("pause");
	return 0;
}