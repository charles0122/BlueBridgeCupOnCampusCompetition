//问题描述
//如果一个 mp3 文件占用磁盘的大小是 4MB，小蓝的硬盘还剩下 100GB 的空间，请问他还可以放多少个这样的 mp3 文件？
//答案提交
//这是一道结果填空的题，你只需要算出结果后提交即可。本题的结果为一个整数，在提交答案时只填写这个整数，填写多余的内容将无法得分。

#include <iostream>
using namespace std;

int main() {
	int yp = 100 * 1024;
	int ans = yp / 4;
	cout << ans << endl;
	return 0;
}