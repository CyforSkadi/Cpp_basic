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
//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬�Ҳ��Ḵ���µĸ���
void printstudent(const student *s)
{
	//s->age = 150;//����const��һ���޸ľͻᱨ�����Է�ֹ�����
	cout<< "������" << s->name << " ���䣺" << s->age << " �ɼ���" << s->score << endl;
}

int main6()
{
	student s = { "����",15,70 };

	printstudent(&s);
	cout << "main�����������䣺" << s.age << endl;

	system("pause");
	return 0;
}