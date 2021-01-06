//问题描述
//给定一个单词，请问在单词中删除 t 个字母后，能得到的字典序最小的单词是什么？
//输入格式
//输入的第一行包含一个单词，由大写英文字母组成。
//第二行包含一个正整数 t。
//输出格式
//输出一个单词，表示答案
//样例输入
//LANQIAO
//3
//样例输出
//AIAO
//数据规模和约定
//对于所有评测用例，单词长度不超过 100，t 小于单词长度。

#include<iostream>
#include<string>
using namespace std;

int main() {
	string word;
	cin >> word;
	int t = 0;
	cin >> t;
	char maxChar='A';
	char max;
	for (int i = 0; i < t; i++)
	{
		for (int i = 0; i < word.length(); i++)
		{
			cout << word[i]<<endl;
			max = maxChar > word[i] ? maxChar : word[i] ;
		}
	}
	return 0;
}
