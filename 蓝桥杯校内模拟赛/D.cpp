//��������
//���� 1 �� 6 ����һ�𣬳�Ϊ 123456������Ϊ 6��
//���� 1 �� 12 ����һ�𣬳�Ϊ 123456789101112������Ϊ 15��
//�������� 1 �� 2020 ����һ�𣬳���Ϊ���٣�
//���ύ
//����һ�������յ��⣬��ֻ��Ҫ���������ύ���ɡ�����Ľ��Ϊһ�����������ύ��ʱֻ��д�����������д��������ݽ��޷��÷֡�

#include <iostream>
#include <string>

using namespace std;

//����ת�ַ���
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