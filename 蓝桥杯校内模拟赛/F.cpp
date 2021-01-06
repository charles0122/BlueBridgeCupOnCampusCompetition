#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int l=0;
	int h = 0;
	cin >> l;
	cin >> h;
	float area = (float)l * h / 2;
	if ((int)(area + 0.999999) == area)
	{
		cout << (int)area << endl;
	}
	else {
		cout << round(10.0*area)/10.0 << endl;
	}

	return 0;
}