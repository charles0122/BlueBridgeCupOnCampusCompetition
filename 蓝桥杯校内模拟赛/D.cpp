//问题描述
//整数 1 到 6 连在一起，成为 123456，长度为 6。
//整数 1 到 12 连在一起，成为 123456789101112，长度为 15。
//请问整数 1 到 2020 连在一起，长度为多少？
//答案提交
//这是一道结果填空的题，你只需要算出结果后提交即可。本题的结果为一个整数，在提交答案时只填写这个整数，填写多余的内容将无法得分。

#include <iostream>
#include <string>

using namespace std;

//数字转字符串
string numberTostr(int num)
{
	string strInt = std::to_string(num);
	//cout << "strInt = " << strInt << endl;
	return strInt;
}

int main()
{

	string str;
	for (int i = 1; i < 2021; i++)
	{
		str += numberTostr(i);

	}
	cout << str.length() << endl;
	return 0;
}