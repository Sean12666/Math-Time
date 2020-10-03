// Math Time.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;

// #define SHUTDOWN

int main()
{
	const int quest = 3;
	int answer[quest], ans[quest];
	bool mis[quest] = { false };
	cout << "Welcome to Math Time!" << endl;
	Sleep(2000);
	cout << "You need to get 50+ in 1 minute or your computer will shutdown." << endl;
	Sleep(2000);
	cout << "--------------------------------------------------" << endl;
#ifdef SHUTDOWN
	system("shutdown /s /t 60");
#endif // SHUTDOWN
	double score = 0;
	srand(static_cast<unsigned int>(time(NULL)));
	for (int i = 0; i < quest; i++)
	{
		int num1, num2;
		num1 = rand() % 900 + 100;
		num2 = rand() % 900 + 100;
		char oper;
		int a = rand();
		if (a % 2 == 0)
		{
			oper = '+';
		}
		else
		{
			oper = '-';
		}
		if (oper == '+')
		{
			answer[i] = num1 + num2;
		}
		else
		{
			answer[i] = num1 - num2;
		}
		cout << "Question " << i + 1 << ":" << endl;
		cout << num1 << oper << num2 << "=";
		cin >> ans[i];
		if (ans[i] == answer[i])
		{
			score += 100.0 / quest;
		}
		else
		{
			mis[i] = true;
		}
		cout << endl;
		Sleep(1000);
	}
	cout << "--------------------------------------------------" << endl;
	Sleep(1000);
	if (score > 50)
	{
		cout << "Congratulations!" << endl;
		cout << "You score is " << score << "." << endl;
		system("shutdown /a");
	}
	else
	{
		cout << "You score is " << score << "." << endl;
		cout << "Come on!" << endl;
		
	}
	cout << endl;
	Sleep(1000);
	for (int i = 0; i < quest; i++)
	{
		if (mis[i])
		{
			cout << "The answer of Question " << i + 1 << " is wrong." << endl;
			Sleep(1000);
		}
	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
