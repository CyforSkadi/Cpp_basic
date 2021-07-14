#include<iostream>
using namespace std;

int main3()
{
	//敲桌子，1~100内找到含7或者7的倍数打印敲桌子

	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 ==0 || i / 10 == 7 || i % 10 == 7)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
		
	}

	system("pause");

	return 0;
}