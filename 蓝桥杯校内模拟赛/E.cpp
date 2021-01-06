#include<iostream>
using namespace std;

int main() {
	int arr[] = { 87, 39, 35, 1, 99, 10, 54, 1, 46, 24,
				74, 62, 49, 13, 2, 80, 24, 58, 8, 14,
				83, 23, 97, 85, 3, 2, 86, 10, 71, 15 };
	int count = 0;
	int numcount=0;
	for (int i =0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[i])
				count++;
		}
		numcount++;
	}
	cout << numcount << endl;
	cout << count << endl;

	return 0;
}