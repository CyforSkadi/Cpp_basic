#include<iostream>
using namespace std;
#include<string>
#define Max 1000	//�������1000

//�����ϵ�˽ṹ��
struct Person
{
	string m_Name;
	int m_Sex;	//1��  2Ů
	int m_Age;
	string m_Phone;
	string m_Address;
};

//���ͨѶ¼�ṹ��
struct Addressbooks
{
	Person personArray[Max];
	int m_Size;
};

//�˵�����
void showMenu()
{
	cout << "^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << "^^^^^1�������ϵ��^^^^^" << endl;
	cout << "^^^^^2����ʾ��ϵ��^^^^^" << endl;
	cout << "^^^^^3��ɾ����ϵ��^^^^^" << endl;
	cout << "^^^^^4��������ϵ��^^^^^" << endl;
	cout << "^^^^^5���޸���ϵ��^^^^^" << endl;
	cout << "^^^^^6�������ϵ��^^^^^" << endl;
	cout << "^^^^^0���˳�ͨѶ¼^^^^^" << endl;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^" << endl;
}

//�����ϵ�˺���
void addPerson(Addressbooks *abs)
{
	if (abs->m_Size == Max)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		//��������
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//�����Ա�
		int sex = 0;
		cout << "�������Ա�" << endl;
		cout << "1---�У�2---Ů" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
					abs->personArray[abs->m_Size].m_Sex = sex;
					break;
			}
			else
			{
				cout << "������������������" << endl;
			}
		}

		//��������
		int age = 0;
		cout << "���������䣺" << endl;
		while (true)
		{
			cin >> age;
			if (age > 0 && age < 150) 
			{
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			else
			{
				cout << "������������������" << endl;
			}
		}

		//����绰
		string phone;
		cout << "��������ϵ�绰��" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//�����ַ
		string address;
		cout << "�������ַ��" << endl;
		cin >> address;
		abs->personArray[abs->m_Size].m_Address = address;

		//����ͨѶ¼������
		abs->m_Size++;
		cout << "��ϵ����ӳɹ�" << endl;

		//����
		system("pause");
		system("cls");

	}
}

//��ʾ��ϵ�˺���
void showPerson(Addressbooks *abs)
{
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "��ַ��" << abs->personArray[i].m_Address << endl;
		}
	}

	system("pause");
	system("cls");

}

//�����ϵ�˺��������ڷ�����ϵ�����������е�λ�ã������ڷ���-1
int isExit(Addressbooks *abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

//ɾ����ϵ�˺���
void deletePerson(Addressbooks *abs)
{
	cout << "��������Ҫɾ������ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = isExit(abs, name);
	
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;	//��������
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	
	system("pause");
	system("cls");

}

//������ϵ�˺���
void findPerson(Addressbooks *abs)
{
	cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = isExit(abs, name);

	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "��ַ��" << abs->personArray[ret].m_Address << endl;
	}

	system("pause");
	system("cls");

}

//�޸���ϵ�˺���
void modifyPerson(Addressbooks *abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = isExit(abs, name);

	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		//�޸�����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//�޸��Ա�
		int sex = 0;
		cout << "�������Ա�" << endl;
		cout << "1---�У�2---Ů" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		
		//�޸�����
		int age = 0;
		cout << "���������䣺" << endl;
		while (true)
		{
			cin >> age;
			if (age > 0 && age < 150)
			{
				abs->personArray[ret].m_Age = age;
				break;
			}
			else
			{
				cout << "������������������" << endl;
			}
		}

		//�޸ĵ绰
		string phone;
		cout << "������绰��" << endl;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//�޸ĵ�ַ
		string address;
		cout << "�������ַ��" << endl;
		cin >> address;
		abs->personArray[ret].m_Address = address;

		cout << "�޸ĳɹ�" << endl;
	}
	
	system("pause");
	system("cls");
	
}

//�����ϵ�˺���
void cleanPerson(Addressbooks *abs)
{
	int sure = 0;
	cout << "��ȷ�������ϵ�ˣ�1��ȷ��  2��ȡ��" << endl;
	while (true)
	{
		cin >> sure;
		if (sure == 1)
		{
			abs->m_Size = 0;	//��ǰ��¼��ϵ���������㣬���߼��ϵ����
			cout << "��ϵ�������" << endl;
			break;
		}
		else if (sure == 2)
		{
			cout << "��ȡ�������ϵ��" << endl;
			break;
		}
			
		else
		{
			cout << "������������������" << endl;
		}
	}

	system("pause");
	system("cls");
}

int main()
{
	//����ͨѶ¼
	Addressbooks abs;
	abs.m_Size = 0;
	
	int select = 0;

	while (true)
	{
		//��ʾ�˵�
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1:		//�����ϵ��
			addPerson(&abs);
			break;
		case 2:		//��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:		//ɾ����ϵ��
		//{
		//	cout << "������ɾ����ϵ��������" << endl;
		//	string name;
		//	cin >> name;
		//	if (isExit(&abs, name) == -1)
		//	{
		//		cout << "���޴���" << endl;
		//	}
		//	else
		//	{
		//		cout << "�ҵ�����" << endl;
		//	}
		//}
			deletePerson(&abs);
			break;
		case 4:		//������ϵ��
			findPerson(&abs);
			break;
		case 5:		//�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:		//�����ϵ��
			cleanPerson(&abs);
			break;
		case 0:		//�˳�ͨѶ¼


			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");

	return 0;
}