#include<iostream>
using namespace std;

int main8(){
	
	//在屏幕中打印0~9
	int num = 0;
	
	//写循环时要避免死循环
	while (num < 10)
	{
		cout << num << endl;
		num++;
	}


	system("pause");

	return 0;
}