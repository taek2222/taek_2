#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int r;
	double A, V;

	cout << "������ : ";
	cin >> r;
	A = 4 * 3.14 * pow(r, 2);
	V = (4 / 3) * 3.14 * pow(r, 3);
	cout << "ǥ���� : " << A;
	cout << "���� : " << V;

	return 0;
}