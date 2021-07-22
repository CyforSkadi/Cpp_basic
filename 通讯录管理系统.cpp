#include<iostream>
using namespace std;
#include<string>
#define Max 1000	//最大人数1000

//设计联系人结构体
struct Person
{
	string m_Name;
	int m_Sex;	//1男  2女
	int m_Age;
	string m_Phone;
	string m_Address;
};

//设计通讯录结构体
struct Addressbooks
{
	Person personArray[Max];
	int m_Size;
};

//菜单界面
void showMenu()
{
	cout << "^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << "^^^^^1、添加联系人^^^^^" << endl;
	cout << "^^^^^2、显示联系人^^^^^" << endl;
	cout << "^^^^^3、删除联系人^^^^^" << endl;
	cout << "^^^^^4、查找联系人^^^^^" << endl;
	cout << "^^^^^5、修改联系人^^^^^" << endl;
	cout << "^^^^^6、清空联系人^^^^^" << endl;
	cout << "^^^^^0、退出通讯录^^^^^" << endl;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^" << endl;
}

//添加联系人函数
void addPerson(Addressbooks *abs)
{
	if (abs->m_Size == Max)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		//输入姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//输入性别
		int sex = 0;
		cout << "请输入性别：" << endl;
		cout << "1---男，2---女" << endl;
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
				cout << "输入有误，请重新输入" << endl;
			}
		}

		//输入年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
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
				cout << "输入有误，请重新输入" << endl;
			}
		}

		//输入电话
		string phone;
		cout << "请输入联系电话：" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//输入地址
		string address;
		cout << "请输入地址：" << endl;
		cin >> address;
		abs->personArray[abs->m_Size].m_Address = address;

		//更新通讯录的人数
		abs->m_Size++;
		cout << "联系人添加成功" << endl;

		//清屏
		system("pause");
		system("cls");

	}
}

//显示联系人函数
void showPerson(Addressbooks *abs)
{
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "地址：" << abs->personArray[i].m_Address << endl;
		}
	}

	system("pause");
	system("cls");

}

//检测联系人函数，存在返回联系人所在数组中的位置，不存在返回-1
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

//删除联系人函数
void deletePerson(Addressbooks *abs)
{
	cout << "请输入需要删除的联系人：" << endl;
	string name;
	cin >> name;
	int ret = isExit(abs, name);
	
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;	//更新人数
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	
	system("pause");
	system("cls");

}

//查找联系人函数
void findPerson(Addressbooks *abs)
{
	cout << "请输入需要查找的联系人：" << endl;
	string name;
	cin >> name;
	int ret = isExit(abs, name);

	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "地址：" << abs->personArray[ret].m_Address << endl;
	}

	system("pause");
	system("cls");

}

//修改联系人函数
void modifyPerson(Addressbooks *abs)
{
	cout << "请输入需要修改的联系人：" << endl;
	string name;
	cin >> name;
	int ret = isExit(abs, name);

	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		//修改姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//修改性别
		int sex = 0;
		cout << "请输入性别：" << endl;
		cout << "1---男，2---女" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		
		//修改年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
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
				cout << "输入有误，请重新输入" << endl;
			}
		}

		//修改电话
		string phone;
		cout << "请输入电话：" << endl;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//修改地址
		string address;
		cout << "请输入地址：" << endl;
		cin >> address;
		abs->personArray[ret].m_Address = address;

		cout << "修改成功" << endl;
	}
	
	system("pause");
	system("cls");
	
}

//清空联系人函数
void cleanPerson(Addressbooks *abs)
{
	int sure = 0;
	cout << "请确认清空联系人：1、确定  2、取消" << endl;
	while (true)
	{
		cin >> sure;
		if (sure == 1)
		{
			abs->m_Size = 0;	//当前记录联系人数量置零，做逻辑上的清空
			cout << "联系人已清空" << endl;
			break;
		}
		else if (sure == 2)
		{
			cout << "已取消清空联系人" << endl;
			break;
		}
			
		else
		{
			cout << "输入有误，请重新输入" << endl;
		}
	}

	system("pause");
	system("cls");
}

int main()
{
	//创建通讯录
	Addressbooks abs;
	abs.m_Size = 0;
	
	int select = 0;

	while (true)
	{
		//显示菜单
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1:		//添加联系人
			addPerson(&abs);
			break;
		case 2:		//显示联系人
			showPerson(&abs);
			break;
		case 3:		//删除联系人
		//{
		//	cout << "请输入删除联系人姓名：" << endl;
		//	string name;
		//	cin >> name;
		//	if (isExit(&abs, name) == -1)
		//	{
		//		cout << "查无此人" << endl;
		//	}
		//	else
		//	{
		//		cout << "找到此人" << endl;
		//	}
		//}
			deletePerson(&abs);
			break;
		case 4:		//查找联系人
			findPerson(&abs);
			break;
		case 5:		//修改联系人
			modifyPerson(&abs);
			break;
		case 6:		//清空联系人
			cleanPerson(&abs);
			break;
		case 0:		//退出通讯录


			cout << "欢迎下次使用" << endl;
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