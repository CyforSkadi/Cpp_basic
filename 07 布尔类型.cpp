#include<iostream>
#include<string>
using namespace std;

int main7() {

	//创建布尔类型

	bool flag = true;
	cout << flag << endl;

	flag = false;
	cout << flag << endl;

	//查看内存空间

	cout << "布尔类型所占内存为" << sizeof(bool) << endl;

	system("pause");

	return 0;
}