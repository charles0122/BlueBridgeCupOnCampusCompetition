//��������
//����һ�����ʣ������ڵ�����ɾ�� t ����ĸ���ܵõ����ֵ�����С�ĵ�����ʲô��
//�����ʽ
//����ĵ�һ�а���һ�����ʣ��ɴ�дӢ����ĸ��ɡ�
//�ڶ��а���һ�������� t��
//�����ʽ
//���һ�����ʣ���ʾ��
//��������
//LANQIAO
//3
//�������
//AIAO
//���ݹ�ģ��Լ��
//���������������������ʳ��Ȳ����� 100��t С�ڵ��ʳ��ȡ�

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
