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
//��ӡѧ����Ϣ����
//1��ֵ����
void printstudent1(student s)
{
	s.age = 100;//�����޸��������е�����
	cout<<"�Ӻ���1�д�ӡ ������" << s.name << " ���䣺" << s.age << " �ɼ���" << s.score << endl;
}
//2����ַ����
void printstudent2(student *p)
{
	p->age = 200;//���޸��������е�����
	cout << "�Ӻ���2�д�ӡ ������" << p->name << " ���䣺" << p->age << " �ɼ���" << p->score << endl;
}

int main5()
{
	student s;
	s.name = "����";
	s.age = 20;
	s.score = 80;

	printstudent1(s);
	printstudent2(&s);
	cout << "main�����д�ӡ ������" << s.name << " ���䣺" << s.age << " �ɼ���" << s.score << endl;

	system("pause");
	return 0;
}