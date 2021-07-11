#include<iostream>
#include<string>
using namespace std;

int main6() {

	//C风格字符串
	//char 字符串名[]
	//等号后面用双引号

	char str1[] = "hello world";
	cout << str1 << endl;

	//C++风格字符串
	//包含头文件#include<string>

	string str2 = "hello world";
	cout << str2 << endl;

	system("pause");

	return 0;
}