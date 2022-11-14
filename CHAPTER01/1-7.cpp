#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int r;
	double A, V;

	cout << "반지름 : ";
	cin >> r;
	A = 4 * 3.14 * pow(r, 2);
	V = (4 / 3) * 3.14 * pow(r, 3);
	cout << "표면적 : " << A;
	cout << "부피 : " << V;

	return 0;
}