#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int r;
	double A, V;
	double pi = 3.14;

	cout << "반지름 : ";
	cin >> r;
	A = 4 * pi * pow(r, 2);
	V = 4.0 / 3.0 * pi * pow(r, 3);
	cout << "표면적 : " << A << endl;
	cout << "부피 : " << V;

	return 0;
}
