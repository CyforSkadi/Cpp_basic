#include<iostream>
using namespace std;

int main4() {
	//字符型创建方式
	char ch = 'a';
	cout << ch << endl;

	//字符型所占内存大小
	cout << "字符型变量所占内存为" << sizeof(char) << endl;

	//常见错误
	//char ch2 = "b";//要用单引号
	//char ch3 = 'wdad';//单引号内只能有一个字符

	//字符型变量对应的ASCII码
	cout << (int)ch << endl;
	//a-97 A-65

	system("pause");

	return 0;
}
