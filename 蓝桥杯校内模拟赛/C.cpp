//问题描述
//一个包含 2020 个结点的无向图，如果图中没有自环和重边，最多包含多少条边？
//答案提交
//这是一道结果填空的题，你只需要算出结果后提交即可。本题的结果为一个整数，在提交答案时只填写这个整数，填写多余的内容将无法得分。

#include<iostream>
using namespace std;

int main() {
	int f = 2020, s = 2019;
	//cin >> f >> s;
	cout << f * s / 2 << endl;
	return 0;
}